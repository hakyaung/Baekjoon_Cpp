#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < cnt; j++) {
			cout << ' ';
		}
		for (int j = 0; j < (n - i) * 2 - 1; j++) {
			cout << '*';
		}
		cout << '\n';
		cnt++;
	}

	cnt = n - 2;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < cnt; j++) {
			cout << ' ';
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << '*';
		}
		cout << '\n';
		cnt--;
	}

	return 0;
}