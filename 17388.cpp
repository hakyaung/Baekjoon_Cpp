#include <iostream>
using namespace std;
int main() {
	int s, k, h;

	cin >> s >> k >> h;

	if ((s + k + h) >= 100) {
		cout << "OK";
	}
	else {
		int min = s;

		if (min > k) {
			min = k;
		}
		if (min > h) {
			min = h;
		}

		if (min == s) {
			cout << "Soongsil";
		}
		else if (min == k) {
			cout << "Korea";
		}
		else {
			cout << "Hanyang";
		}
	}

	return 0;
}