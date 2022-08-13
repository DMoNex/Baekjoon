#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int i = 0;
	bool flag = true;

	cin >> input;
	while (i < input.size()) {
		while (input[i] == '.') {
			++i;
		}
		
		if (i + 3 < input.size()) {
			if (input[i] == 'X' && input[i + 1] == 'X' && input[i + 2] == 'X' && input[i + 3] == 'X') {
				input[i] = 'A';
				input[i + 1] = 'A';
				input[i + 2] = 'A';
				input[i + 3] = 'A';

				i += 4;
				continue;
			}
		}
		if (i + 1 < input.size()) {
			if (input[i] == 'X' && input[i + 1] == 'X') {
				input[i] = 'B';
				input[i + 1] = 'B';

				i += 2;
				continue;
			}
		}
		if (input[i] == 'X' && input[i + 1] != 'X') {
			flag = false;
			break;
		}
	}

	if (flag)
		cout << input;
	else
		cout << -1;
}
