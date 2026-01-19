#include <iostream>
using namespace std;
int main() {
	int least = 0;
	int most = 0;

	cin >> least >> most;

	if ((least >= 3) && (most <= 4)) {
		cout << "TroyMartian\n";
	}
	if ((least <= 6) && (most >= 2)) {
		cout << "VladSaturnian\n";
	}
	if ((least <= 2) && (most <= 3)) {
		cout << "GraemeMercurian\n";
	}

	return 0;
}