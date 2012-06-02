#ifndef __RECTANGLE_HPP
#define __RECTANGLE_HPP

#include "Shape.hpp"

namespace H3D {
	class Rectangle:public Shape {
		public:
		Rectangle();
		Rectangle(Vector position, int width, int height);
		Rectangle(Vector position, float width, float height);
		Rectangle(int x, int y, int z, int width, int height);
		Rectangle(float x, float y, float z, float width, float height);
	};
}

#endif
