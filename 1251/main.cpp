#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

string solve(int i, int j, string word) {
	string result = word;
	
	reverse(result.begin(), result.begin() + i + 1);
	reverse(result.begin() + i + 1, result.begin() + j + 1);
	reverse(result.begin() + j + 1, result.end());

	return result;
}

int main() {
	string word;
	vector<string> result;

	cin >> word;

	for (int i = 0; i < word.size() - 2; ++i) {
		for (int j = i + 1; j < word.size() - 1; ++j) {
			result.push_back(solve(i, j, word));
		}
	}

	sort(result.begin(), result.end());

	cout << result.front();
}
