#include <iostream>
using namespace std;

int main() {
	int T, K, N;

	cin >> T;
	while (T--) {
		long long arr[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };

		cin >> K >> N;

		for (int i = 0; i < K; ++i) {
			for (int j = 1; j < N; ++j) {
				arr[j] += arr[j - 1];
			}
		}

		cout << arr[N - 1] << endl;
	}
}
