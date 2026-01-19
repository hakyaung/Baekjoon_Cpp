#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	bool sw = false;
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		n = n % 42;
		sw = false;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == n) {
				sw = true;
			}
		}
		if (sw == false) {
			v.push_back(n);
		}
	}

	cout << v.size();

	return 0;
}