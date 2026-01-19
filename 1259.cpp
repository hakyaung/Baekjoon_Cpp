#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;

	while (true) {
		cin >> str;

		if (str == "0") {
			break;
		}
		else {
			string rev = str;

			reverse(rev.begin(), rev.end());

			if (str == rev) {
				cout << "yes\n";
			}
			else {
				cout << "no\n";
			}
		}
	}

	return 0;
}