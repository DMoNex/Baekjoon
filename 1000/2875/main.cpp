#include <iostream>
using namespace std;

int cal(int A, int B) {
	return (A / 2) > B ? B : A / 2;
}

int main() {
	int N, M, K, max = 0, k = -1;

	cin >> N >> M >> K;

	for (int i = 0; i <= K; ++i) {
		if (max < cal(N-i, M-(K-i))) {
			max = cal(N - i, M - (K - i));
			k = i;
		}
	}
	
	cout << max;
}
