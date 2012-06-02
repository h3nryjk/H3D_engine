#ifndef __WINDOW_HPP
#define __WINDOW_HPP

namespace H3D {
	class Window:public Screen {
		public:
		Window(int width, int height);
		
		void setFullscreen(bool fullscreen);
		
	}
}

#endif
