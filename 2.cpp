#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace cv;

int main(int argc, char** argv) {
	//int CV_WINDOW_AUTOSIZE = 0;
	//int CV_BGR2GRAY = 0;
	Mat src, dst;
	src = imread("D:/project/test.jpg");
	if (!src.data) {
		printf("could not load image...\n");
		return -1;
	}
	namedWindow("opencv setup demo", WINDOW_AUTOSIZE);
	imshow("opencv setup demo", src);

	namedWindow("output window", WINDOW_AUTOSIZE);
	Mat output_image;
	cvtColor(src, output_image,COLOR_RGB2HLS);
	imshow("output window", output_image);
	waitKey(0);
	return 0;
}