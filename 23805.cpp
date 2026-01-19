#include <iostream>
using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n * 5; i++) {
		if (i < n) {
			for (int j = 0; j < n * 3; j++) {
				cout << "@";
			}
			for (int j = 0; j < n; j++) {
				cout << " ";
			}
			for (int j = 0; j < n; j++) {
				cout << "@";
			}
		}
		else if (i >= (n * 5) - n) {
			
			for (int j = 0; j < n; j++) {
				cout << "@";
			}
			for (int j = 0; j < n; j++) {
				cout << " ";
			}
			for (int j = 0; j < n * 3; j++) {
				cout << "@";
			}
		}
		else {
			for (int j = 0; j < 2; j++) {
				for (int k = 0; k < n; k++) {
					cout << "@";
				}
				for (int k = 0; k < n; k++) {
					cout << " ";
				}
			}
			for (int j = 0; j < n; j++) {
				cout << "@";
			}
		}
		cout << '\n';
	}

	return 0;
}