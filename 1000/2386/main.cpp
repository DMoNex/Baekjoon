#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	char cmd;
	string input;

	while (true) {
		cnt = 0;

		cin >> cmd;
		if (cmd == '#')
			break;

		getline(cin, input);

		for (int i = 0; i < input.length(); ++i) {
			if (input[i] == cmd || input[i] + 32 == cmd)
				cnt++;
		}

		cout << cmd << ' ' << cnt << '\n';
	}
}
