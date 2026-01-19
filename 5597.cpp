#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	vector<int> v(30);

	for (int i = 0; i < v.size(); i++) {
		v[i] = i+1;
	}

	for (int i = 0; i < 28; i++) {
		cin >> n;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == n) {
				v[j] = 0;
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] != 0) {
			cout << v[i] << '\n';
		}
	}

	return 0;
}