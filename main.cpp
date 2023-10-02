#include <stdio.h>

int Recursive(int n) {
	if (n <= 100) {
		return n * 2 - 50;
	}
	return (n * Recursive(n - 1));
}

int main(void) {
	
	int n = 1;
	int result;
	result = Recursive(n);
	int select = 0;

	printf("1か2を入力 : ");
	scanf_s("%d\n", select);

	if (select == 1) {
		printf("一般的な資金体系\n");
	}
	else if (select == 2) {
		if (n == 1) {
			printf("100円スタート\n");
			n++;
		}
		else if (n > 1) {
			printf("%d\n", result);
			n++;
		}
	}

	return 0;
}