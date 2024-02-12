#include "Elephant.h"
#include "Hamster.h"

int main(void) {

	Animal* hamster;
	Animal* elephant;

	hamster = new Hamster();
	elephant = new Elephant();

	hamster->Size();
	elephant->Size();

	return 0;
}