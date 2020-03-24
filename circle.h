#define _USE_MATH_DEFINES
#include <cmath>
#include "base-types.h"
#include "shape.h"
#include <iostream>

class Circle: public Shape{
public:
	double getArea();
	rectangle_t getFrameRect();
	point_t getPos();
	double getRad();
	void move(double new_x, double new_y);
private:
	point_t pos_;
	double rad_;
};
