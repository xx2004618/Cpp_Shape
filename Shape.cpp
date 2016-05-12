/*
 * Shape.cpp
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape() {
	// TODO Auto-generated constructor stub
	cout << "Shape()" << endl;
}

Shape::~Shape() {
	// TODO Auto-generated destructor stub
	cout << "~Shape()" << endl;
}

double Shape::calcArea() {
	cout << "Shape -> calcArea()" << endl;
	return 0;
}

