#include "Abroad.h"
#include "Friend.h"

int main(void) {

	Transportation* abroad;
	Transportation* friends;

	abroad = new Abroad();
	friends = new Friend();

	abroad->MeansOfTransportation();
	friends->MeansOfTransportation();

	return 0;
}