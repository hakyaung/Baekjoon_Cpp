#include <iostream>

using std::cin;
using std::cout;

int main() {
	char str[3]{ 'U','O','S' };
	long long int n;

	cin >> n;

	int mod = n % 3;

	switch (mod)
	{
	case 1:
		cout << str[0];
		break;
	case 2:
		cout << str[1];
		break;
	case 0:
		cout << str[2];
		break;
	default:
		break;
	}

	return 0;
}