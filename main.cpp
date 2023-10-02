#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
	return a < b ? a : b;
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return 0;
}

int main(void) {

	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.0, 3.0));
	Min<char>('a', 'c');

	return 0;
}