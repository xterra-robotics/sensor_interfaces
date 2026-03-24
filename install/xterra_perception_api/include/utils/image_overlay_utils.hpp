#ifndef IMAGE_OVERLAY_UTILS_HPP
#define IMAGE_OVERLAY_UTILS_HPP

#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>

namespace xterra_perception_api
{
    class ImageOverlayUtils
    {
    public:
        ImageOverlayUtils()
            : text_color_(cv::Scalar(0, 255, 0)), // Green (BGR format)
              text_scale_(1.0), text_thickness_(2),
              font_face_(cv::FONT_HERSHEY_SIMPLEX)
        {
        }

        ImageOverlayUtils(const cv::Scalar &color, double scale, int thickness, cv::HersheyFonts font)
            : text_color_(color), text_scale_(scale), text_thickness_(thickness), font_face_(font)

        {
        }

        cv::Mat addTextOverlay(const cv::Mat &image, const std::string &camera_name, const std::string &image_type) const
        {
            cv::Mat result = image.clone();

            std::stringstream ss;
            ss << camera_name << " [" << image_type << "]";
            std::string text = ss.str();

            int baseline = 0;
            cv::Size text_size = cv::getTextSize(text, font_face_, text_scale_,
                                                 text_thickness_, &baseline);

            int x = (result.cols - text_size.width) / 2;
            int y = text_size.height + 20;

            cv::rectangle(result, cv::Point(x - 5, y - text_size.height - 5),
                          cv::Point(x + text_size.width + 5, y + baseline + 5),
                          cv::Scalar(0, 0, 0), cv::FILLED);

            cv::putText(result, text, cv::Point(x, y), font_face_, text_scale_,
                        text_color_, text_thickness_, cv::LINE_AA);

            return result;
        }

    private:
        cv::Scalar text_color_;      ///< Text color in BGR format
        double text_scale_;          ///< Font scale factor
        int text_thickness_;         ///< Line thickness for text rendering
        cv::HersheyFonts font_face_; ///< OpenCV Hershey font type
    };

} // namespace xterra_perception_api

#endif // IMAGE_OVERLAY_UTILS_HPP
