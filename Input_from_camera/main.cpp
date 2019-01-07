#include <iostream> 

//#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;


int main()
{
	
	cv::namedWindow("Example", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap(0);
	cv::Mat frame;
	while (true)
	{
		cap >> frame;
		if (frame.empty()) break;
		cv::imshow("Example", frame);
		if (cv::waitKey(33) >= 0) break;
	}




	return 0;
}