#include <iostream>
using namespace std;

int main() {
	int N, M, K, ki, kj, kx, ky, sum = 0;
	int arr[300][300] = { 0 };

	cin >> N >> M;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> arr[i][j];

	cin >> K;
	while (K--) {
		sum = 0;
		cin >> ki >> kj >> kx >> ky;
		
		for (int i = ki - 1; i < kx; ++i)
			for (int j = kj - 1; j < ky; ++j)
				sum += arr[i][j];

		cout << sum << '\n';
	}
}
