#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
	return a < b ? a : b;
}

template<>
char Min<char>(char a, char b) {
	return printf("�����ȊO�͑���ł��܂���\n");
}

int main(void) {

	

	return 0;
}