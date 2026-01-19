#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	double m = 0;
	double sum = 0;

	cin >> n;
	vector<double> v(n);

	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
		if (v[i] >= m) {
			m = v[i];
		}
	}

	for (int i = 0; i < v.size(); i++) {
		v[i] = v[i] / m * 100;
		sum += v[i];
	}

	cout << sum / n;

	return 0;
}