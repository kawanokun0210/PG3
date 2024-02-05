#include <stdio.h>
#include <Windows.h>
#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <list>
using namespace std;

struct StudentNumber {
	string name;
	string number;
	string studentNumber;
};

int main() {
	list<StudentNumber> studentNumbers;
	ifstream inputFile("PG3_05_02.txt");
	assert(inputFile.is_open());

	string line;
	while (getline(inputFile, line)) {
		istringstream lineStream(line);
		string account;
		while (getline(lineStream, account, ',')) {
			StudentNumber StudentNumber{};
			StudentNumber.name = account;
			string number = account.substr(2, 3);
			string studentNumber = account.substr(6, 4);
			StudentNumber.number = number.c_str();
			StudentNumber.studentNumber = studentNumber.c_str();
			studentNumbers.emplace_back(StudentNumber);
		}
	}

	inputFile.close();

	studentNumbers.sort([](const StudentNumber& a, const StudentNumber& b) {
		return  atoi((a.number + a.studentNumber).c_str()) < atoi((b.number + b.studentNumber).c_str());
		}
	);

	for (auto& accountName : studentNumbers) {
		cout << accountName.name << endl;
	}

	return 0;
}