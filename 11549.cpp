#include <iostream>
using namespace std;
int main() {
	int t;
	int cnt = 0;

	cin >> t;

	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		if (n == t) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}