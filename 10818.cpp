#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int max, min;
	int su = 0;

	cin >> n;
	cin >> su;
	max = su;
	min = su;

	for (int i = 0; i < n-1; i++) {
		cin >> su;
		if (su >= max) {
			max = su;
		}
		if (su <= min) {
			min = su;
		}
	}

	cout << min << " " << max;

	return 0;
}