#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <list>
using namespace std;

int main() {
	list<const char*> YamanoteLine = {
	"Tokyo","Kanda","Akihabara",
	"Okachimachi","Ueno","Uguisudani",
	"Nippori","Tabata","Komagome",
	"Sugamo","Otsuka","Ikebukuro",
	"Mejiro","Takadanobaba","Shin-Okubo",
	"Shinjuku","Yoyogi","Harajuku",
	"Shibuya","Ebisu","Meguro",
	"Gotanda","Osaki","Shinagawa",
	"Tamachi","Hamatsucho","Shimbashi","Yurakucho"
	};

	printf("1970\n");

	for (list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		printf(",");
	}

	printf("\n");
	printf("\n2019\n");

	for (list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "Tabata") {
			itr = YamanoteLine.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	for (list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		printf(",");
	}

	printf("\n");
	printf("\n2022\n");

	for (list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = YamanoteLine.insert(itr, "Takanawa-Gateway");
			break;
		}
	}

	for (list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		printf(",");
	}

	return 0;
}