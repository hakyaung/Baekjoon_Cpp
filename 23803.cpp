#include <iostream>
int main() {
	int n;

	std::cin >> n;

	for (int i = 0; i < n * 5 - n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << "@";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			std::cout << "@";
		}
		std::cout << '\n';
	}

	return 0;
}