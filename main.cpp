#include <stdio.h>

int Recursive(int n) {
	if (n <= 100) {
		return n * 2 - 50;
	}
	return (n * Recursive(n - 1));
}

int main(void) {
	
	int n = 1;
	int select = 0;

	printf("1か2を入力 : ");
	scanf_s("%d", select);

	if (select == 1) {
		printf("一般的な資金体系");
	}
	else if (select == 2) {
		if (n == 1) {
			printf("100円スタート");
			n++;
		}
		else if (n > 1) {
			printf("%d", Recursive(n));
			n++;
		}
	}

}