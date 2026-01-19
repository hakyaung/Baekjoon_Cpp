#include <iostream>
#include <string>
using namespace std;
int main() {
	string blank;
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		cin >> blank;
		for (int j = 0; j < 8; j++) {
			if (i % 2 != 0) {
				if (j % 2 != 0) {
					if (blank[j] == 'F') {
						cnt++;
					}
				}
			}
			else {
				if (j % 2 == 0) {
					if (blank[j] == 'F') {
						cnt++;
					}
				}
			}
		}
	}

	cout << cnt;

	return 0;
}