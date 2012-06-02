#ifndef __SCREEN_H
#define __SCREEN_H

#include <vector>

using namespace std;

namespace H3D {
	class Screen {
		public:
		Screen(int width, int height);
		
		void draw();
		void add(Shape s);
		
		protected:
		vector<Shape> shapes;
	};
}

#endif
