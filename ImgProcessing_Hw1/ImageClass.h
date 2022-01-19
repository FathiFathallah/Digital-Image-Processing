#pragma once
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2\highgui.hpp>
public class ImageClass
{
private:
	cv::Mat img;  //img variable , that will store the original image
	//so that when we want to change anything we will call the get function from our class and it will return ourimage
	//then we will edit it and modify then show him the updated image
public:
	ImageClass(); //Constucter
	~ImageClass();//destucter
	cv::Mat get_Image();
	void set_Image(cv::Mat image);
};

