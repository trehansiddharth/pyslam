#ifndef SLAM_H
#define SLAM_H

#include <opencv2/core/core.hpp>
#include "ORB_SLAM2/System.h"

class SLAM {
public:
    SLAM(const std::string strVocFile, const std::string strSettingsFile);
    cv::Mat update(const cv::Mat rgb, const cv::Mat depth, const double timestamp);
private:
    ORB_SLAM2::System* pSLAM;
};

#endif
