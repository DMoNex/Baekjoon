#include <iostream>
#include <string>
using namespace std;

int main() {
	int mix[4][4] = { 0, 2, 0, 1, 2, 1, 3, 0, 0, 3, 2, 1, 1, 0, 1, 3 };
	char convert[4] = { 'A', 'G', 'C', 'T' };
	string input;

	cin >> input >> input;
	for (int i = 0; i < input.size(); ++i) {
		if (input[i] == 'A') input[i] = 0;
		else if (input[i] == 'G') input[i] = 1;
		else if (input[i] == 'C') input[i] = 2;
		else if (input[i] == 'T') input[i] = 3;
	}

	while (input.size() > 1) {
		int A = input[input.size() - 2], B = input[input.size() - 1];

		input.erase(input.size() - 2, 2);
		input += mix[A][B];
	}

	cout << convert[input[0]];
}
