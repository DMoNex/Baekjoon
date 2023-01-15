#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string input;

	cin >> N;
	while (N--) {
		cin >> input;
		for (int i = 0; i < input.size(); ++i) {
			if (input[i] >= 'A' && input[i] <= 'Z')
				input[i] += 32;
		}

		cout << input << '\n';
	}
}
