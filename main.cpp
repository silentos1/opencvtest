/*
* File:   main.cpp
* Author: sagar
*
* Created on 10 September, 2012, 7:48 PM
*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	//wybiera kamere domyslna
	VideoCapture streamdice1(0);   

	//sprawdza czy wykryto kamere
	if (!streamdice1.isOpened()) { 
		cout << "cannot open camera";
	}
	//ustawia rozdzielczosc
	streamdice1.set(CV_CAP_PROP_FRAME_WIDTH, 1920);
	streamdice1.set(CV_CAP_PROP_FRAME_HEIGHT, 1080);

	//petla w ktorej wyswietlany jest obraz
	while (true) {
		Mat cameraDiceFrame;
		streamdice1.read(cameraDiceFrame);
		imshow("cam", cameraDiceFrame);
		if (waitKey(30) >= 0)
			break;
	}
	return 0;
}