#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int cnt = 0;

	while (true) {
		cin >> n;
		cnt = n;
		if (n == 0) {
			break;
		}
		else {
			while (n != 1) {
				n--;
				cnt = cnt + n;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}