#include <iostream>
#include <iomanip>
int main() {
	long double a, b;

	std::cin >> a >> b;

	std::cout << std::fixed << std::setprecision(9);
	std::cout << a / b;

	return 0;
}