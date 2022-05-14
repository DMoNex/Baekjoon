#include <iostream>
using namespace std;

int main() {
	int N, result = 665;
	int tmp = 0;

	cin >> N;

	for (int i = 0; i < N; true) {
		++result;
		tmp = result;

		while (tmp) {
			if (tmp % 1000 == 666) {
				++i;
				break;
			}
			else tmp /= 10;
		}
	}

	cout << result;
}
