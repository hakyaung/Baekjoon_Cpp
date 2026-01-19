#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	int cnt = n * 2 - 2;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		for (int j = 0; j < cnt; j++) {
			cout << ' ';
		}
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		cout << '\n';
		cnt -= 2;
	}

	for (int i = 0; i < n * 2; i++) {
		cout << '*';
	}

	cout << '\n';

	cnt += 2;

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		for (int j = 0; j < cnt; j++) {
			cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << '\n';
		cnt += 2;
	}

	return 0;
}