#include <iostream>
int main() {
	int su1 = 0, su2 = 0;

	while (true) {
		std::cin >> su1 >> su2;
		if ((su1 == 0) && (su2 == 0)) {
			break;
		}
		if (su1 > su2) {
			std::cout << "Yes\n";
		}
		else {
			std::cout << "No\n";
		}
	}

	return 0;
}