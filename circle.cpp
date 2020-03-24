#include "circle.h"

double getArea(){
	return(M_PI*rad_*rad_);
}

rectangle_t getFrameRect(){
	rectangle_t new_obj;
	new_obj.width = rad_*2;
	new_obj.height = rad_*2;
	return (new_obj);
}

double getRad(){
	return(rad_);
}

point_t getPos(){
	return(pos_);
}

void move(double new_x, double new_y){
	pos_.x = new_x;
	pos_.y = new_y;
}
