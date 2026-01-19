#include <iostream>
using namespace std;
int main() {
	int a;
	int hap = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a;
		hap += a;
	}

	cout << hap << '\n';

	return 0;
}