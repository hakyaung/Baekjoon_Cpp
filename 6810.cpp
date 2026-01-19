#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> lastNum(3);

	for (int i = 0; i < lastNum.size(); i++) {
		cin >> lastNum[i];
	}

	cout << "The 1-3-sum is " << 9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3 + lastNum[0] * 1 + lastNum[1] * 3 + lastNum[2] * 1;

	return 0;
}