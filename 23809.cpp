#include <iostream>
void printSideOne(int n);
void printSideTwo(int n);
using namespace std;
int main() {
	int n;

	cin >> n;

	printSideOne(n);
	printSideTwo(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 3; j++) {
			cout << "@";
		}
		cout << '\n';
	}
	printSideTwo(n);
	printSideOne(n);

	return 0;
}

void printSideOne(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			if (j < n) {
				cout << "@";
			}
			else if (j >= (n * 5) - n) {
				cout << "@";
			}
			else {
				cout << " ";
			}
		}
		cout << '\n';
	}
}

void printSideTwo(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 4; j++) {
			if (j < n) {
				cout << "@";
			}
			else if (j >= (n * 4) - n) {
				cout << "@";
			}
			else {
				cout << " ";
			}
		}
		cout << '\n';
	}
}