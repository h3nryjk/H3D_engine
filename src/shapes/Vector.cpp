#include "Vector.hpp"
#include <cmath>

using namespace H3D;

Vector::Vector() {
	v1 = 0.0f;
	v2 = 0.0f;
	v3 = 0.0f;
}
	
Vector::Vector(Point p1, Point p2) {
	v1 = p2.x - p1.x;
	v2 = p2.y - p1.y;
	v3 = p2.z - p1.z;
}

Vector::Vector(int v1, int v2, int v3) {
	this->v1 = (float)v1;
	this->v2 = (float)v2;
	this->v3 = (float)v3;
}

Vector::Vector(float v1, float v2, float v3) {
	this->v1 = v1;
	this->v2 = v2;
	this->v3 = v3;
}
		
Point Vector::toPoint() {
	Point p(v1, v2, v3);
	return p;
}

Vector Vector::vectorProduct(Vector v) {
	return Vector(v2*v.v3 - v3*v.v2, v3*v.v1 - v1*v.v3, v1*v.v2 - v2*v.v1);
}

float Vector::scalarProduct(Vector v) {
	return v1*v.v1 + v2*v.v2 + v3*v.v3;
}

bool Vector::isMultiple(Vector v) {
	float factor = v.v1/v1;
	Vector u(v1*factor, v2*factor, v3*factor);
	return u==v;
}

float Vector::length() {
	return sqrt(pow(v1, 2) + pow(v2, 2) + pow(v3, 2));
}

bool Vector::operator==(Vector v) {
	if(v1==v.v1 && v2==v.v2 && v3==v.v3) {
		return true;
	}
	return false;
}

float Vector::operator*(Vector v) {
	return scalarProduct(v);
}

Vector Vector::operator*(float f) {
	return Vector(v1*f, v2*f, v3*f);
}
