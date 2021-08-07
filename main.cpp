#include "FileCapturer.h"
#include "global.h"
#include "ImageMatcher.h"
#include "ScreenCapturer.h"

int main(int ac, char** av)
{

	//while (1)
	//{
	//	ScreenCapturer screenCapturer;
	//	auto inputImage = screenCapturer.Capture();
	//	imshow("test", inputImage);
	//	waitKey(5000);
	//}
	FileCapturer matchFrom("TestImage/screen.png");
	FileCapturer matchTo("TestImage/object.png");
	auto screen = matchFrom.Capture();
	auto object = matchTo.Capture();

	ImageMatchResult imageResult;
	ImageMatcher::MatchSift(matchFrom, matchTo, imageResult);
	

	int x = 0;
    //

	
	
    //Mat image01 = imread("2.jpg", 1);    //右图
    //Mat image02 = imread("1.jpg", 1);    //左图
    //namedWindow("p2", 0);
    //namedWindow("p1", 0);
    //imshow("p2", image01);
    //imshow("p1", image02);
	
	system("pause");
	
	return 0;
}