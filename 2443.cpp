#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	int cnt = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int j = 0; j < cnt * 2 + 1; j++) {
			cout << '*';
		}
		cout << '\n';
		cnt--;
	}

	return 0;
}