#include <iostream>
int main() {
	int a, b;

	std::cin >> a >> b;

	if ((a > 0) && (b > 0)) {
		std::cout << "1";
	}
	else if ((a < 0) && (b > 0)) {
		std::cout << "2";
	}
	else if ((a < 0) && (b < 0)) {
		std::cout << "3";
	}
	else {
		std::cout << "4";
	}

	return 0;
}