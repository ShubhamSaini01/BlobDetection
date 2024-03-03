#pragma once
#include<iostream>
#include<iostream>
// #include <opencv2/>
#include<opencv2/opencv.hpp>
// #include<opencv/o>
class blobDetection
{
private:
    /* data */
public:
    blobDetection(/* args */);
    void getImage(std::string path);
    void detect(void* image);
    void display();

    ~blobDetection();
    enum modes { DOG, HOG,LOG };
    cv::Mat inputImage;
    cv::Mat outputImage; 
};


