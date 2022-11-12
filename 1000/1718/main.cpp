#include <iostream>
#include <string>
using namespace std;

int main() {
	string input, incode, result;

	getline(cin, input);
	cin >> incode;

	int j = 0;
	for (int i = 0; i < input.size(); ++i) {
		if (input[i] == ' ') {
			++j;

			if (j == incode.size())
				j = 0;

			result.push_back(' ');
			
			continue;
		}

		char tmp = input[i] - (incode[j] - 'a' + 1);
		if (tmp < 'a') tmp += 26;

		result.push_back(tmp);

		++j;
		if (j == incode.size())
			j = 0;
	}

	cout << result;
}
