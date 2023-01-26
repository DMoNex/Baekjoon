#include <iostream>
#include <string>
using namespace std;

int main() {
	int number = 0;
	string input;

	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		if (input[i] >= 'a' && input[i] <= 'z')
			number += input[i] - 96;
		else if (input[i] >= 'A' && input[i] <= 'Z')
			number += input[i] - 38;
	}

	for (int i = 2; i < number; ++i) {
		if (number % i == 0) {
			cout << "It is not a prime word.";
			return 0;
		}
	}

	cout << "It is a prime word.";
}
