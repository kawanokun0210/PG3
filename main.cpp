#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main(void) {
	
	list<const char*> yamamoto = { "1.Tokyo","2.kanda","3.Akihabara",""};

	printf("1970year\n");
	for (auto itr = yamamoto.begin(); itr != yamamoto.end(); ++itr) {
		cout << *itr << "\n";
	} 

	return 0;
}