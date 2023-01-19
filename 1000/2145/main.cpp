#include <iostream>
using namespace std;

int main() {
	int N, sum;
	while (true) {
		cin >> N;

		if (N == 0) return 0;

		while(true) {
			sum = 0;
			while (N > 0) {
				sum += (N % 10);
				N /= 10;
			}

			if (sum < 10) break;
			else {
				N = sum;
			}
		}

		cout << sum << '\n';
	}
}
