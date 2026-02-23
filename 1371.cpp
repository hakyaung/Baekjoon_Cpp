#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::count;

int main() {
	vector<int> word(26, 0);
	string str;

	while (cin >> str) {
		for (char c : str) {
			int idx = c - 'a';
			word[idx]++;
		}
	}

	int max = 0;
	for (int i = 0;i < word.size();i++) {
		if (max <= word[i]) {
			max = word[i];
		}
	}

	vector<char> result;

	for (int i = 0;i < word.size();i++) {
		if (max == word[i]) {
			result.push_back(i + 'a');
		}
	}

	for (char c : result) {
		cout << c;
	}

	return 0;
}