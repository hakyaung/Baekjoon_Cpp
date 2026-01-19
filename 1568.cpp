#include <iostream>
int main() {
	int n;
	int k = 1;
	int count = 0;

	std::cin >> n;

	while (n > 0) {
		if (k > n) {
			k = 1;
		}
		n = n - k;
		k++;
		count++;
	}

	std::cout << count;

	return 0;
}