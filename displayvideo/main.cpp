#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include <iostream>





int main() {
	cv::VideoCapture video;
	video.open(0);

	cv::namedWindow("video", cv::WINDOW_AUTOSIZE);

	cv::Mat frame;

	while (true) {
		video >> frame;
		if (frame.empty()) break;
		cv::imshow("Video", frame);
		char c = cv::waitKey(33);
		if (c>=0) break;
	}

	system("pause");
	return 0;

}


	

