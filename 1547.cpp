#include <iostream>
#include <utility>

using std::cin;
using std::cout;
using std::pair;

//void printc(int (&c)[3]) {
//	for (int i = 0; i < 3; i++) {
//		cout << c[i] << ' ';
//	}
//	cout << '\n';
//}

pair<int, int> find_idx(int x, int y, int(&c)[3]) {
	int idx1, idx2;
	
	for (int i = 0; i < 3; i++) {
		if (c[i] == x) {
			idx1 = i;
		}
		if (c[i] == y) {
			idx2 = i;
		}
	}

	return pair<int, int>(idx1, idx2);
}

void change_cup(int idx1, int idx2, int(&c)[3]) {
	int tmp = c[idx1];
	c[idx1] = c[idx2];
	c[idx2] = tmp;
}

int main() {
	int m;
	int cup[3] = {};

	for (int i = 0; i < 3; i++) {
		cup[i] = i + 1;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		auto [idx1, idx2] = find_idx(x, y, cup);
		change_cup(idx1, idx2, cup);
		//printc(cup);
	}

	cout << cup[0];

	return 0;
}