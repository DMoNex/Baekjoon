#include <iostream>
#include <string>
using namespace std;

string getOctal(string input) {
	string result;

	char a, b, c;
	
	for (int i = 0; i < input.size(); i += 3) {
		a = input[i + 2] - '0';
		b = input[i + 1] - '0';
		c = input[i] - '0';
		result += (a + b * 2 + c * 4 + '0');
	}

	return result;
}

int main() {
	string input;
	cin >> input;
	
	while (input.size() % 3 != 0)
		input = "0" + input;

	cout << getOctal(input);
}
