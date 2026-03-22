import jinja2
import yaml
import sys

def generate_model(template_file, config_file, output_file):
    # Load config
    with open(config_file, 'r') as f:
        config = yaml.safe_load(f)
    
    # Load template
    env = jinja2.Environment(loader=jinja2.FileSystemLoader('.'))
    template = env.get_template(template_file)
    
    # Render
    rendered = template.render(config)
    
    # Write output
    with open(output_file, 'w') as f:
        f.write(rendered)

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: python generate.py <template.jinja> <config.yaml> <output.xml/urdf>")
        sys.exit(1)
    generate_model(sys.argv[1], sys.argv[2], sys.argv[3])
