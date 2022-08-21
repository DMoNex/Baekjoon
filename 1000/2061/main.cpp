#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int L, result;
	bool flag = true;

	cin >> input >> L;
	for (int i = 2; i < L; ++i) {
		result = 0;
		for (int j = 0; j < input.size(); ++j) {
			result *= 10;
			result += (input[j] - '0');
			result %= i;
		}
		if (result == 0) {
			cout << "BAD " << i;
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "GOOD";
}
