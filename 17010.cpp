#include <iostream>
using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int j = 0; j < a; j++) {
			cout << c;
		}
		cout << '\n';
	}

	return 0;
}