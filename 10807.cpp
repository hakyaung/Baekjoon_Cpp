#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int a[100] = {};
	int t = 0, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> t;

	for (int i = 0; i < n; i++) {
		if (a[i] == t) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}