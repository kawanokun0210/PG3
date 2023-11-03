﻿#include <stdio.h>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>
#include <functional>

std::random_device seed_Gen;
std::mt19937 mtrand(seed_Gen());

void DiceResult(int diceNumber) {
	//偶数
	if (diceNumber % 2 == 0) {
		printf("結果　丁(偶数)\n");
	}
	// 奇数
	if (diceNumber % 2 == 1) {
		printf("結果　半(奇数)\n");
	}
}

int WaitingTime(std::function<int()> returnValue, int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	return returnValue();

}

int main() {

	int Result;
	int Answer;

	std::function<int()> p = []() {return std::uniform_int_distribution<int>(1, 6)(seed_Gen); };

	while (true) {

		printf("1:半(奇数)　2:丁(偶数)\n");
		std::cin >> Answer;
		if (Answer == 0) {
			break;
		}
		Result = WaitingTime(p, 3);
		printf("答え : %d\n", Result);
		DiceResult(Result);
		if (Result % 2 == 0 && Answer == 2) {
			printf("正解\n");
		}
		else if (Result % 2 == 1 && Answer == 1) {
			printf("正解\n");
		}
		else {
			printf("不正解\n");
		}

	}

	return 0;
}