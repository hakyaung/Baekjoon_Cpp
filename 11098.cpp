#include <iostream>
#include <string>	
using namespace std;
int main() {
	int n;
	int p;
	string name = "";
	string max_name = "";

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		int max = 0;
		for (int j = 0; j < p; j++) {
			int price = 0;
			cin >> price >> name;
			if (price > max) {
				max = price;
				max_name = name;
			}
		}
		cout << max_name << '\n';
	}

	return 0;
}