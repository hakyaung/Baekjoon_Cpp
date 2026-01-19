#include <iostream>
int main() {
	int h, m;

	std::cin >> h >> m;

	if (m >= 45) {
		m = m - 45;
	}
	else {
		m = m + 60 - 45;
		if (h < 1) {
			h = h + 24 - 1;
		}
		else {
			h--;
		}
	}

	std::cout << h << " " << m;

	return 0;
}