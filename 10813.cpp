#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	int a, b;
	int tmp = 0;

	cin >> n >> m;
	vector<int> v1(n);

	for (int i = 0; i < v1.size(); i++) {
		v1[i] = i+1;
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		a--;
		b--;
		tmp = v1[a];
		v1[a] = v1[b];
		v1[b] = tmp;
	}

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}

	return 0;
}