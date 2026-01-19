#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str1;
	string str2;
	string result_str = "";

	cin >> str1 >> str2;
	int strlen = str1.length();

	if (str1.length() >= str2.length()) {
		strlen = str1.length();
	}
	else {
		strlen = str2.length();
	}

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int up = 0;

	for (int i = 0; i < strlen; i++) {
		int a;
		int b;
		if (i < str1.length()) {
			a = str1[i] - '0';
		}
		else {
			a = 0;
		}
		if (i < str2.length()) {
			b = str2[i] - '0';
		}
		else {
			b = 0;
		}
		int c = a + b + up;

		if (c >= 10) {
			up = 1;
			c -= 10;
		}
		else {
			up = 0;
		}

		if (i == strlen - 1) {
			result_str += c + '0';
			if (up > 0) {
				result_str += up + '0';
			}
		}
		else {
			result_str += c + '0';
		}
	}

	reverse(result_str.begin(), result_str.end());

	cout << result_str << endl;

	return 0;
}