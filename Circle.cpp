/*
 * Circle.cpp
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(double radiusIn) {
	// TODO Auto-generated constructor stub
	radius = radiusIn;
	cout << "Circle()" << endl;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
	cout << "~Circle()" << endl;
}

double Circle::calcArea() {
	cout << "Circle -> calcArea()" << endl;
	return (double)3.1415926 * radius * radius;
}
