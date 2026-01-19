#include <iostream>
int main() {
	int su[5] = {};
	int hap = 0;

	for (int i = 0; i < 5; i++) {
		std::cin >> su[i];
		hap = hap + su[i] * su[i];
	}

	std::cout << hap % 10;

	return 0;
}