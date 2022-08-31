#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	int tmp = 0, result = 0;

	for (int i = 0; i < input.size(); ++i) {
		result *= 10;
		tmp *= 10;
		tmp += (input[i] - '0');

		if (tmp > 7) {
			tmp -= 7;
			result += 7;
		}
		else if (tmp == 7) {
			if (i + 1 < input.size() && (input[i + 1] - '0') < 4) {
				tmp -= 4;
				result += 4;
			}
			else if (i + 1 <= input.size()) {
				tmp -= 7;
				result += 7;
			}
		}
		else if (tmp > 4) {
			tmp -= 4;
			result += 4;
		}
		else if (tmp == 4) {
			if (i + 1 < input.size() && (input[i + 1] - '0') < 4) {
				result /= 10;
				continue;
			}
			else if (i + 1 <= input.size()) {
				tmp -= 4;
				result += 4;
			}
		}
		else
			continue;
	}

	cout << result;
}
