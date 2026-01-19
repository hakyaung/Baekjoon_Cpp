#include <iostream>
using namespace std;
int main() {
	int n;
	int su = 0;

	cin >> n;

	for (int i = 0;i < n; i++) {
		cin >> su;
		if (su <= 2) {
			cout << "Pairs for " << su << ":" << '\n';
		}
		else {
			cout << "Pairs for " << su << ": ";
			bool first = false;
			for (int j = 1; j <= su / 2; j++) {
				if (j == su - j) {
					
				}
				else {
					if (first == true) {
						cout << ", ";
						cout << j << " " << su - j;
					}
					else {
						cout << j << " " << su - j;
						first = true;
					}
				}
			}
			cout << '\n';
		}
	 }

	return 0;
}