#include <iostream>
int main() {
	int d1, d2, d3;

	std::cin >> d1 >> d2 >> d3;

	if (d1 == d2 && d2 == d3) {
		std::cout << 10000 + d1 * 1000;
	}
	else if (d1 == d2) {
		std::cout << 1000 + d1 * 100;
	}
	else if (d1 == d3) {
		std::cout << 1000 + d1 * 100;
	}
	else if (d2 == d3) {
		std::cout << 1000 + d2 * 100;
	}
	else {
		int max = d1;
		if (d2 > max) {
			max = d2;
		}
		if (d3 > max) {
			max = d3;
		}
		std::cout << max * 100;
	}

	return 0;
}