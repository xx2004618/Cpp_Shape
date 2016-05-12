/*
 * Circle.h
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
class Circle : public Shape{
public:
	Circle(double radiusIn);
	virtual ~Circle();
	virtual double calcArea();

private:
	double radius;
};

#endif /* CIRCLE_H_ */
