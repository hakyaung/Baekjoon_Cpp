#include <iostream>
using namespace std;
int main() {
	int su = 0;
	int max = 0;
	int index = 0;

	cin >> su;
	max = su;
	index = 1;

	for (int i = 2; i < 10; i++) {
		cin >> su;
		if (su > max) {
			max = su;
			index = i;
		}
	}

	cout << max << '\n' << index;

	return 0;
}