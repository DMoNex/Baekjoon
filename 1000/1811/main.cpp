#include <iostream>
#include <string>
using namespace std;

int main() {
	string input, ans;
	int black = 0, grey = 0, white = 0;

	while (true) {
		black = grey = white = 0;

		cin >> ans;

		if (ans == "#") break;

		cin >> input;

		cout << input << ": ";

		for (int i = 0; i < ans.size(); ++i) {
			if (ans[i] == input[i]) {
				black++;
				ans[i] = '#';
				input[i] = '#';
			}
		}

		for (int i = 0; i < ans.size(); ++i) {
			if (ans[i] == '#') continue;

			if (i > 0 && ans[i] == input[i - 1]) {
				ans[i] = '#';
				input[i - 1] = '#';
				grey++;
				
				continue;
			}
			if (i < input.size() - 1 && ans[i] == input[i + 1]) {
				ans[i] = '#';
				input[i + 1] = '#';
				grey++;
			}
		}

		for (int i = 0; i < ans.size(); ++i) {
			if (ans[i] == '#') continue;
			
			for (int j = 0; j < input.size(); ++j) {
				if (input[j] == '#') continue;

				if (ans[i] == input[j]) {
					white++;
					ans[i] = '#';
					input[j] = '#';
				}
			}
		}

		cout << black << " black, " << grey << " grey, " << white << " white\n";
	}
}
