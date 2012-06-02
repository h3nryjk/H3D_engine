#ifndef __SHAPE_HPP
#define __SHAPE_HPP

#include "Vector.hpp"

namespace H3D {
	class Shape {
		public:
		Shape();
		Shape(Vector position);
		
		void setPosition(position);
		void setPosition(float x, float y, float z=0.0f);
		void setPosition(int x, int y, int z=0);
		Vector getPosition();
		float getX();
		float getY();
		float getZ();
		
		void draw(Screen* s);
		
		protected:
		Vector position;
	};
}

#endif
