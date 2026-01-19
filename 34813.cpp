#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	cin >> str;

	char c = str[0];

	switch (c) {
	case 'F':
		cout << "Foundation" << endl;
		break;
	case 'C':
		cout << "Claves" << endl;
		break;
	case 'V':
		cout << "Veritas" << endl;
		break;
	case 'E':
		cout << "Exploration" << endl;
		break;
	default:
		break;
	}

	return 0;
}