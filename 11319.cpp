#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int n;
	int con = 0;
	int vow = 0;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, str);
		con = 0;
		vow = 0;
		for (int j = 0; j < str.length(); j++) {
			switch (str[j]) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vow++;
					break;
				case ' ':
					break;
				default:
					con++;
					break;
			}
		}
		cout << con << " " << vow << '\n';
	}

	return 0;
}