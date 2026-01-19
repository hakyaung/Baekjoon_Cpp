#include <iostream>
using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n * 2; i++) {
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

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << "@";
		}
		cout << '\n';
	}

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

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << "@";
		}
		cout << '\n';
	}

	return 0;
}