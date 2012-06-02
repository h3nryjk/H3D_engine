#include "Point.hpp"

using namespace H3D;

Point::Point() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Point::Point(int x, int y, int z) {
	this->x = (float)x;
	this->y = (float)y;
	this->z = (float)z;
}

Point::Point(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
