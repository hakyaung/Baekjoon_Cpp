#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str = "";
		cin >> str;
		int result = stoi(str, nullptr, 2);
		cout << result << '\n';
	}

	return 0;
}