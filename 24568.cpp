#include <iostream>

using std::cin;
using std::cout;

int main() {
	int regular;
	int small;

	cin >> regular >> small;

	cout << (regular * 8) + (small * 3) - 28;

	return 0;
}