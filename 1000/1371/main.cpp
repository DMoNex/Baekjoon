#include <iostream>
#include <string>
using namespace std;

int main() {
	int count[26] = { 0 }, max = 0;
	string input;

	while (getline(cin, input)) {
		for (int i = 0; i < input.size(); ++i) {
			if (input[i] >= 'a' && input[i] <= 'z')
				count[input[i] - 'a']++;

			max < count[input[i] - 'a'] ? max = count[input[i] - 'a'] : false;
		}
	}

	for (int iter = 0; iter < 26; ++iter) {
		if (max == count[iter])
			cout << (char)('a' + iter);
	}
}
