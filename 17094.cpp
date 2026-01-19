#include <iostream>
using namespace std;
int main() {
	int n;
	char a;
	int cnt2 = 0;
	int cnte = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == '2') {
			cnt2++;
		}
		else {
			cnte++;
		}
	}

	if (cnt2 == cnte) {
		cout << "yee";
	}
	else if (cnt2 > cnte) {
		cout << "2";
	}
	else {
		cout << "e";
	}

	return 0;
}