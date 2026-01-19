#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
	string str;
	string token;
	int cnt = 0;

	getline(cin, str);

	stringstream st(str);

	while (st >> token) {
		cnt++;
	}

	cout << cnt;

	return 0;
}