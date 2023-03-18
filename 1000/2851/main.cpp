#include <iostream>
using namespace std;

int getDiff(int A, int B) {
	return A < B ? B - A : A - B;
}

int main() {
	int sum = 0, input, prev = 100;

	for (int i = 0; i < 10; ++i) {
		cin >> input;

		sum += input;

		if (getDiff(sum, 100) > prev) {
			cout << sum - input;
			return 0;
		}
		else if (getDiff(sum, 100) == prev) {
			cout << sum;
			return 0;
		}
		else {
			prev = getDiff(sum, 100);
		}
	}

	cout << sum;
}
