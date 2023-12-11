#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main(void) {
	
	list<const char*> yamanote = { "1.Tokyo","2.kanda","3.Akihabara",""};

	printf("1970year\n");
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << "\n";
	} 

	return 0;
}