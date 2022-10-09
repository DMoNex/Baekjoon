#include <iostream>
using namespace std;

int main() {
	long long input, sum = 0;
	int result = 1;

	cin >> input;
	while (true) {
		sum += result;

		if (sum <= input)
			result++;
		else
			break;
	}

	cout << result - 1;
}
