#include <iostream>
using namespace std;
int main() {
	int t = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n = 0;
		int cnt = 0;
		int j = 1;
		cin >> n;
		while (j <= n) {
			if (j % 2 != 0) {
				cnt += j;
			}
			j++;
		}
		cout << cnt << '\n';
	}

	return 0;
}