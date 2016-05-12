/*
 * Rectangle.h
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"
class Rectangle: public Shape {
public:
	Rectangle(double widhtIn, double heightIn);
	virtual ~Rectangle();
	virtual double calcArea();

private:
	double width;
	double height;
};

#endif /* RECTANGLE_H_ */
