#include <iostream>
int main() {
	std::string str = "";
	std::string a = "";

	std::cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] <= 96) {
			a = tolower(str[i]);
			std::cout << a;
		}
		else {
			a = toupper(str[i]);
			std::cout << a;
		}
	}

	return 0;
}