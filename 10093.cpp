#include <iostream>
using namespace std;
int main() {
	long long int a, b;

	cin >> a >> b;

	if (a < b) {
		cout << b - a - 1 << '\n';

		for (long long int i = a + 1; i < b; i++) {
			cout << i << " ";
		}
	}
	else if(a > b){
		cout << a - b - 1 << '\n';

		for (long long int i = b + 1; i < a; i++) {
			cout << i << " ";
		}
	}
	else {
		cout << "0";
	}

	return 0;
}