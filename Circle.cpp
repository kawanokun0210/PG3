#include "Circle.h"

void Circle::size() {
	area = radius * radius * 3.14f;
}

void Circle::draw() {
	printf("円の面積は%fです\n", area);
}