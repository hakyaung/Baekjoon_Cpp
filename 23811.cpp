#include <iostream>
using namespace std;

void printLong(int n);
void printShort(int n);

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			printLong(n);
		}
		else {
			printShort(n);
		}
	}

	return 0;
}

void printLong(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << "@";
		}
		cout << '\n';
	}
}

void printShort(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "@";
		}
		cout << '\n';
	}
}