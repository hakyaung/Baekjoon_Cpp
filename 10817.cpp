#include <iostream>
using namespace std;
int main() {
	int su[3] = {};
	int tmp = 0;

	for (int i = 0; i < 3; i++) {
		cin >> su[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (su[i] > su[j]) {
				tmp = su[j];
				su[j] = su[i];
				su[i] = tmp;
			}
		}
	}

	cout << su[1];

	return 0;
}