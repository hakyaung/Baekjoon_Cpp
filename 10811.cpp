#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m;

	cin >> n >> m;
	vector<int> v(n);

	for (int i = 0; i < v.size(); i++) {
		v[i] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		int t, q;
		cin >> t >> q;
		t--;
		reverse(v.begin() + t, v.begin() + q);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}