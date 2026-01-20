#include <iostream>
using namespace std;

int main() {
	long long n;

	cin >> n;

	long long a = n - (n * 22 / 100);
	long long b = (n * 80 / 100);
	long long c = (n * 20 / 100);
	b = b + (c - (c * 22 / 100));

	cout << a << ' ' << b;
	return 0;
}