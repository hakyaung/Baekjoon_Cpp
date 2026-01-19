#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int ind;

	cin >> str >> ind;

	ind--;

	cout << str[ind];

	return 0;
}