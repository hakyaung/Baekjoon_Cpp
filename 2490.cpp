#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int front = 0;
		for (int j = 0; j < 4; j++) {
			int yut;
			cin >> yut;
			if (yut == 0) {
				front++;
			}
		}
		switch (front) {
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "D" << endl;
			break;
		default:
			cout << "E" << endl;
			break;
		}
	}

	return 0;
}