#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string oldName = "";
	string youngName = "";
	int oldNum = 99999999;
	int youngNum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		int year;
		int month;
		int day;
		cin >> name >> day >> month >> year;
		int date = year * 10000 + month * 100 + day;
		if (oldNum >= date) {
			oldNum = date;
			oldName = name;
		}
		if (youngNum <= date) {
			youngNum = date;
			youngName = name;
		}
	}

	cout << youngName << endl;
	cout << oldName << endl;

	return 0;
}