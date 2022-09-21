#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	cin >> input;
	for (int i = input.size() - 1; i >= 0; --i) {
		if (i != 0) {
			if (input[i] >= '5')
				input[i - 1]++;

			input[i] = '0';
		}
		else if (input[i] == ':') {
			input[i] = '0';
			input = "1" + input;
		}
	}
	cout << input;
}
