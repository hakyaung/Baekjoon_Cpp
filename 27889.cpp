#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	string str;

	cin >> str;

	if (str == "NLCS") {
		cout << "North London Collegiate School";
	}
	else if (str == "BHA") {
		cout << "Branksome Hall Asia";
	}
	else if (str == "KIS") {
		cout << "Korea International School";
	}
	else if (str == "SJA") {
		cout << "St. Johnsbury Academy";
	}

	return 0;
}