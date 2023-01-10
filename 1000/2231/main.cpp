#include <iostream>
using namespace std;

int getSum(int A) {
	int result = A;

	while (A > 0) {
		result += (A % 10);
		A /= 10;
	}

	return result;
}

int main() {
	int N, result = 0, tmp;

	cin >> N;

	for (int i = N - 1; i > 1; --i) {
		tmp = getSum(i);
		if (tmp > N) continue;
		else if (tmp == N) result = i;
	}

	cout << result;
}
