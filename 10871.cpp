#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> b;
	int n, x;

	cin >> n >> x;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < x) {
			b.push_back(a[i]);
		}
	}

	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}

	return 0;
}