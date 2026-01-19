#include <iostream>
using namespace std;
int main() {
	int n, m, a, b;

	cin >> n >> m >> a >> b;

	int sit = n * 3;

	if (sit <= m) {
		cout << "0";
	}
	else {
		int n_sit = sit - m;
		n_sit = n_sit * a;
		int total = n_sit + b;
		cout << total;
	}

	return 0;
}