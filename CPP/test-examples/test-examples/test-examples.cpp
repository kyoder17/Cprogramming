#include <iostream>

class Polygon {
protected:
	int width, height;
public:
	void set_values(int a = 0, int b = 0) {
		width = a; height = b;
	}
};


class Rectangle : public Polygon {
public:
	int area() {
		return width * height;
	}
};


class Triangle : public Polygon {
public:
	int area() {
		return width * height / 2;
	}
};


int main() {
	// Let's build a rectangle class first
	Rectangle picture_frame;
	// Then let's set values
	picture_frame.set_values(10, 15);
	// Finally let's get the area of the picture frame (rectangle object)
	std::cout << "Area of picture frame is: " << picture_frame.area() << std::endl;



	// Now let's build a Triangle object
	Triangle yield_sign;
	// Let's set yield_signs values
	yield_sign.set_values(10, 15);
	// Finally let's get the area of the picture frame (Triangle object) and print it out
	std::cout << "Area of the yield sign is: " << yield_sign.area() << std::endl;

	getchar(); getchar();
	return 0;
}