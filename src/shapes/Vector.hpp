#ifndef __VECTOR_HPP
#define __VECTOR_HPP

#include "Point.hpp"

namespace H3D {
	class Vector {
		public:
		Vector();
		Vector(Point p1, Point p2);
		Vector(int v1, int v2, int v3=0);
		Vector(float v1, float v2, float v3=0.0f);
		
		Point toPoint();
		Vector vectorProduct(Vector v);
		float scalarProduct(Vector v);
		bool isMultiple(Vector v);
		float length();
		
		bool operator==(Vector v);
		float operator*(Vector v);
		Vector operator*(float f);
		
		float v1, v2, v3;
	};
}

#endif
