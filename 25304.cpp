#include <iostream>
int main() {
	int total, n;
	int a, b, hap = 0;

	std::cin >> total >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		hap = hap + a * b;
	}

	if (total == hap) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}

	return 0;
}