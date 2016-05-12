/*
 * Rectangle.cpp
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double widthIn, double heightIn) {
	// TODO Auto-generated constructor stub
	width = widthIn;
	height = heightIn;
	cout << "Rectangle()" << endl;
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
	cout << "~Rectangle()" << endl;
}

double Rectangle::calcArea(){
	cout << "Rectangle -> calcArea()" << endl;
	return width * height;
}

