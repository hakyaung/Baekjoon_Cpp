#include <iostream>
int main() {
	int su[5] = {};
	int hap = 0;
	int tmp = 0;

	for (int i = 0; i < 5; i++) {
		std::cin >> su[i];
		hap += su[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (su[i] < su[j]) {
				tmp = su[i];
				su[i] = su[j];
				su[j] = tmp;
			}
		}
	}

	std::cout << hap / 5 << '\n';
	std::cout << su[2];

	return 0;
}