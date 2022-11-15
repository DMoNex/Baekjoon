#include <iostream>
#include <string>
using namespace std;

int convert(char A) {
	switch (A) {
	case '-': return 0;
	case '\\': return 1;
	case '(': return 2;
	case '@': return 3;
	case '?': return 4;
	case '>': return 5;
	case '&': return 6;
	case '%': return 7;
	case '/': return -1;
	}
}

int main() {
	string input;

	while (true) {
		cin >> input;

		if (input == "#") break;

		int result = 0, oct = 0;

		for (int i = input.size() - 1; i >= 0; --i) {
			if (oct == 0) oct++;
			else oct *= 8;
			
			result += oct * convert(input[i]);
		}

		cout << result << '\n';
	}
}
