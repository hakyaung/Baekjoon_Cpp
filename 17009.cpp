#include <iostream>
using namespace std;
int main() {
	int apple = 0;
	int banana = 0;
	int n = 0;

	for (int i = 3; i >= 1; i--) {
		cin >> n;
		apple += n * i;
		
	}

	for (int i = 3; i >= 1; i--) {
		cin >> n;
		banana += n * i;
	}

	if (apple > banana) {
		cout << "A";
	}
	else if (banana > apple) {
		cout << "B";
	}
	else {
		cout << "T";
	}

	return 0;
}