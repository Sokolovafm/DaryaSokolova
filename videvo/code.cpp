#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
# define M_PIL 3.141592653589793238462643383279502884L
//#include "Source.h"

using namespace cv;
using namespace std;

int main()

{
	//устанавливаем русскую локаль для консоли
	setlocale(LC_ALL, "Russian");

	char filename[100]; //Figyres.mp4 или Figyres_same_colour.mp4
	cout << "введите имя файла, который хотите проанализировать " << endl;
	cin.getline(filename, 100);
	cout << "Открыт файл";
	cout << filename << endl;

	VideoCapture cap(filename);
	if (!cap.isOpened()) { cout << "Ошибка открытия файла"; return - 1; }
	Mat im;
	for (;;)
	{
		Mat mat, frame;
		cap >> frame;
		mat = frame;
		if (mat.empty()) break;

		imshow("Распознавание", frame);
		if (waitKey(30) >= 0) break;
	}
	return 0;
}
