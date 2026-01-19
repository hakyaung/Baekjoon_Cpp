#include <iostream>
#include <string>
int main() {
	std::string jea_str = "";
	std::string doctor_str = "";
	int jeaSize = 0;
	int doctorSize = 0;

	std::cin >> jea_str;
	std::cin >> doctor_str;

	jeaSize = jea_str.size() - 1;
	doctorSize = doctor_str.size() - 1;

	if (jeaSize >= doctorSize) {
		std::cout << "go";
	}
	else {
		std::cout << "no";
	}

	return 0;
}