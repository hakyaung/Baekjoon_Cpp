#include <iostream>
using namespace std;

int main() {
	long long a;
	long long b;
	long long cnt = 0;

	cin >> a >> b;

	if (a < b) {
		cnt = (a + b) * (b - a + 1) / 2;
	}
	else {
		cnt = (a + b) * (a - b + 1) / 2;
	}
	

	cout << cnt;

	return 0;
}