#include <iostream>
using namespace std;
int main() {
	int cnt = 0;

	for (int i = 0; i < 6; i++) {
		char c = {};
		cin >> c;
		if (c == 'W') {
			cnt++;
		}
	}

	if (cnt >= 5) {
		cout << "1";
		return 0;
	}
	else if (cnt >= 3) {
		cout << "2";
		return 0;
	}
	else if (cnt >= 1) {
		cout << "3";
		return 0;
	}
	else {
		cout << "-1";
		return 0;
	}

	return 0;
}