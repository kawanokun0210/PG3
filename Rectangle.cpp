#include "Rectangle.h"

void Rectangle::size() {
	area = (radius * 2) * (radius * 2);
}

void Rectangle::draw() {
	printf("短形の面積は%fです\n", area);
}