#include <iostream>
using namespace std;

int main() {
	long long N, i;
	cin >> N;

	if (N <= 4) {
		cout << 4;
		return 0;
	}

	for (i = 0; (i + 1) * (i + 1) < N; ++i) {
		continue;
	}

	if (N <= i * i + i)
		cout << (i - 1) * 4 + 2;
	else
		cout << i * 4;
} 
