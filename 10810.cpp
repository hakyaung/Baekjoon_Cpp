#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	int a, b, c;

	cin >> n >> m;
	vector<int> v1(n);

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int j = a-1; j <= b-1; j++) {
			v1[j] = c;
		}
	}

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}

	return 0;
}