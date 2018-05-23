#include "pyslam.hpp"

SLAM::SLAM(const std::string strVocFile, const std::string strSettingsFile) {
    pSLAM = new ORB_SLAM2::System(strVocFile, strSettingsFile, ORB_SLAM2::System::RGBD, false);
}

cv::Mat SLAM::update(const cv::Mat rgb, const cv::Mat depth, const double timestamp) {
    return pSLAM->TrackRGBD(rgb, depth, timestamp);
}

void SLAM::reset() {
    pSLAM->Reset();
}
