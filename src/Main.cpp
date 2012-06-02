#include "shapes/Vector.hpp"
#include "shapes/Point.hpp"
#include <iostream>
using namespace H3D;
using namespace std;

int main() {
	Vector v(1, 2, 3);
	Vector u(2, 4, 6);
	
	cout << (v*3).v1 << endl;
	return 0;
}
