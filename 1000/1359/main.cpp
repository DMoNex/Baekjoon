#include <iostream>
using namespace std;

double comb(int m, int k) {
	int a = m, b = k;
	double facA = 1, facB = 1;
	while (b > 0) {
		facA *= a--;
		facB *= b--;
	}
	return (facA / facB);
}

int main() {
	int N, M, K, res = 1;
	double totalCase = 0, correctCase = 0;
	
	cin >> N >> M >> K;

	totalCase = comb(N, M);
	for (int k = K; k <= M; ++k) {
		if (N - M < M - k) continue;

		correctCase += comb(M, k) * comb(N - M, M - k);
	}

	printf("%.10lf", correctCase / totalCase);
}
