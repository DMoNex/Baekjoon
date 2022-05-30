#include <iostream>
using namespace std;

int main() {
	int N, five, three = 0, tmp, result = -1;

	cin >> N;

	five = N / 5;
	tmp = N % 5;

	while (five >= 0) {
		if (tmp % 3 == 0) {
			three = tmp / 3;
			result = 0;
			break;
		}
		else {
			five--;
			tmp += 5;
		}
	}

	if (result != -1) {
		result = five + three;
	}

	cout << result;
}
