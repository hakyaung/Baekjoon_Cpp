#include <iostream>
int main() {
	int h, m, cook;

	std::cin >> h >> m >> cook;

	if (m + cook < 60) {
		std::cout << h << " " << m + cook;
	}
	else {
		m = m + cook;
		while (m >= 60) {
			h++;
			if (h == 24) {
				h = 0;
			}
			m = m - 60;
		}
		std::cout << h << " " << m;
	}

	return 0;
}