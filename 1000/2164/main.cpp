#include <iostream>
using namespace std;

int main() {
	int N, tmp, result;

	cin >> N;
	if (N == 1) {
		cout << 1;
		return 0;
	}

	tmp = 1;
	while (tmp < N) {
		tmp *= 2;
	}

	if (tmp == N) {
		cout << tmp;
	}
	else {
		tmp /= 2;
		cout << (N - tmp) * 2;
	}
}
