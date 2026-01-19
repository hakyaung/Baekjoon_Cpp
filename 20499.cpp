#include <iostream>
using namespace std;
int main() {
	int k, d, a;
	char s;

	cin >> k >> s >> d >> s >> a;

	if (k + a < d || d == 0) {
		cout << "hasu";
	}
	else {
		cout << "gosu";
	}

	return 0;
}