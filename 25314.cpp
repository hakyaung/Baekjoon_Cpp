#include <iostream>
int main() {
	int n;
	int div = 0;

	std::cin >> n;

	div = n / 4;

	for (int i = 0; i < div; i++) {
		std::cout << "long ";
	}

	std::cout << "int";

	return 0;
}