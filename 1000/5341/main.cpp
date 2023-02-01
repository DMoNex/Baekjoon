#include <iostream>
using namespace std;

int main() {
	int N, sum;

	while (true) {
		sum = 0;

		cin >> N;
		
		if (N == 0) return 0;
		
		for (int i = 0; i < N; ++i) {
			sum += (i + 1);
		}

		cout << sum << '\n';
	}
}
