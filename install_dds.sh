#!/usr/bin/env bash
set -e

echo "=== CycloneDDS clean build ==="

# ---- CONFIG ----
INSTALL_PREFIX="$(pwd)/../ros/install"
REPO_DIR="$(pwd)/cyclonedds"

# ---- HARD CLEAN ENV (CRITICAL) ----
unset LD_LIBRARY_PATH
unset CYCLONEDDS_HOME
unset CMAKE_PREFIX_PATH

# ---- CLEAN PREVIOUS INSTALL ----
rm -rf "$INSTALL_PREFIX"
rm -rf "$REPO_DIR/build"

# ---- BUILD ----
cd "$REPO_DIR"
mkdir build
cd build

cmake .. \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_INSTALL_PREFIX="$INSTALL_PREFIX" \
  -DENABLE_TYPE_DISCOVERY=ON \
  -DENABLE_TOPIC_DISCOVERY=ON

make -j$(nproc)
make install

# ---- REGISTER LIBS ----
export LD_LIBRARY_PATH="$INSTALL_PREFIX/lib"
export CYCLONEDDS_HOME="$INSTALL_PREFIX"
export PATH="$INSTALL_PREFIX/bin:$PATH"

# ---- VERIFY idlc (IMPORTANT) ----
echo "Checking idlc linkage:"
ldd "$INSTALL_PREFIX/bin/idlc" | grep cyclonedds || true

# ---- PYTHON BINDINGS (NO ISOLATION) ----

python3 -m ensurepip --upgrade || (apt-get update && apt-get install -y python3-pip)
python3 -m pip install --no-build-isolation --no-cache-dir \
  git+https://github.com/eclipse-cyclonedds/cyclonedds-python

echo "=== CycloneDDS + Python installed successfully ==="



