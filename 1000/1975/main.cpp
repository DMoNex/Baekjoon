#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, result, tmp;

	cin >> T;
	while (T--) {
		result = 0;

		cin >> N;

		for (int i = 2; i <= N; ++i) {
			tmp = N;

			while (tmp % i == 0) {
				result++;
				tmp /= i;
			}
		}

		cout << result << '\n';
	}
}
