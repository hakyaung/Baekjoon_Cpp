#include <iostream>
int main() {
	int n;
	int tmp = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		tmp += i + 1;
	}

	std::cout << tmp;

	return 0;
}