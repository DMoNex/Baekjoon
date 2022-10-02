#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int count[10] = { 0 }, result = 0;

	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		count[input[i] - '0']++;
	}

	count[6] += count[9];
	count[6]++;
	count[6] /= 2;

	for (int i = 0; i < 9; ++i) {
		result < count[i] ? result = count[i] : false;
	}

	cout << result;
}
