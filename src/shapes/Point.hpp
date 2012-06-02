#ifndef __POINT_HPP
#define __POINT_HPP

/**
 * This is just a simple point class. It can be used to create
 * vectors or any other basic shapes.
 */

namespace H3D {
	class Point {
		public:
		Point();
		Point(int x, int y, int z=0);
		Point(float x, float y, float z=0.0f);
		
		float x, y, z;
		
		private:
	};
}

#endif
