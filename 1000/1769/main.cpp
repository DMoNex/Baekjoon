#include <iostream>
#include <string>
using namespace std;

int main() {
	int result = 0, tmp = 0;
	string input;
	cin >> input;
	
	for (int i = 0; i < input.size(); ++i)
		tmp += (input[i] - '0');

	while (input.size() > 1) {
		tmp = 0;
		for (int i = 0; i < input.size(); ++i)
			tmp += (input[i] - '0');

		input.clear();
		input = to_string(tmp);
		result++;
	}

	if (tmp % 3 == 0 && tmp != 0)
		cout << result << "\nYES";
	else
		cout << result << "\nNO";
}
