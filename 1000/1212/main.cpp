#include <iostream>
#include <string>
using namespace std;

int main() {
	string input, output;
	bool flag = true;

	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		output.push_back((input[i]-'0') / 4 + '0');
		output.push_back(((input[i]-'0') % 4) / 2 + '0');
		output.push_back((input[i]-'0') % 2 + '0');
	}

	for (int i = 0; i < output.size(); ++i) {
		if (output[i] != '0') {
			flag = false;
			output.erase(0, i);
			break;
		}
	}

	if (flag)
		cout << 0;
	else
		cout << output;
}
