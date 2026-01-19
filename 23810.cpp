#include <iostream>
void printLong(int n);
void printShort(int n);
using namespace std;
int main() {
	int n;

	cin >> n;

	printLong(n);
	printShort(n);
	printLong(n);
	printShort(n);
	printShort(n);

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