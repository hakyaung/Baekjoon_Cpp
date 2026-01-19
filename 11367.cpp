#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string str = "";
		string c = "";
		int score = 0;
		cin >> str >> score;
		if ((score >= 97) && (score <= 100)) {
			c = "A+";
		}
		else if ((score >= 90) && (score <= 96)) {
			c = "A";
		}
		else if ((score >= 87) && (score <= 89)) {
			c = "B+";
		}
		else if ((score >= 80) && (score <= 86)) {
			c = "B";
		}
		else if ((score >= 77) && (score <= 79)) {
			c = "C+";
		}
		else if ((score >= 70) && (score <= 76)) {
			c = "C";
		}
		else if ((score >= 67) && (score <= 69)) {
			c = "D+";
		}
		else if ((score >= 60) && (score <= 66)) {
			c = "D";
		}
		else {
			c = "F";
		}
		cout << str << " " << c << '\n';
	}


	return 0;
}