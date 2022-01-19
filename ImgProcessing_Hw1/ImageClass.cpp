#include "ImageClass.h"
//Now we implement the constructer and the set&get functions
ImageClass::ImageClass() {
}
ImageClass::~ImageClass() {
}
cv::Mat ImageClass::get_Image() {
	return (this->img);
}

void ImageClass::set_Image(cv::Mat image) {
	this->img = image;
}