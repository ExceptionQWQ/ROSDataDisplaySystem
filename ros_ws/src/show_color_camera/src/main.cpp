#include "main.h"


void callback()
{
    
    return ;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "show_imu");
    ros::NodeHandle nodeHandle;
    // ros::Subscriber subscriber = nodeHandle.subscribe("/imu/data_raw", 1000, callback);
    // ros::spin();

    cv::Mat view = cv::Mat(cv::Size(512, 512), CV_8UC3);
    cv::line(view, cv::Point(100, 100), cv::Point(300, 300), cv::Scalar(0, 255, 255), 3);
    cv::imshow("view", view);
    cv::waitKey(0);

    return 0;
}