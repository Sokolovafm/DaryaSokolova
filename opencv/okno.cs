#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	int width = 820;
	int height = 640;
	Mat ing(height, width, CV_8UC3);
	
	Point textOrg(550, ing.rows / 2);        //изменение положения текста
	int fontFace = FONT_HERSHEY_PLAIN;       //ИЗМЕНЕНИЕ ШРИФТА
	double fontScale = 2;
	Scalar color(400, 10, 510);              //ИЗМЕНИЛИ ЦВЕТ
	putText(ing, "Hello How A U", textOrg, fontFace, fontScale, color);
	namedWindow("Hello World", 0);
	imshow("Hello World", ing);
	waitKey(0);
	return 0;
  }
