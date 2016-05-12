/*
 * main.h
 *
 *  Created on: 2016年5月11日
 *      Author: xiangxiao
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

class main {
	Shape *s1 = new Circle(3.0);
	Shape *s2 = new Rectangle(3.0, 4.0);
	Shape *s3 = new Shape();
	s1 -> calcArea();
	s2 -> calcArea();
	s3 -> calcArea();
};

#endif /* MAIN_H_ */
