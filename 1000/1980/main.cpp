#include <iostream>
using namespace std;

int main() {
	int N, M, T, cola = 10000, res = 0, mnCola = 10000, mxRes = 0;
	cin >> N >> M >> T;

	if (M < N) swap(M, N);

	for (int j = 0; j < (T / M) + 1; ++j) {
		for (int i = 0; i < (T - j * M) / N + 1; ++i) {
			cola = T - (M * j) - (N * i);
			res = i + j;

			if (mnCola > cola) {
				mnCola = cola;
				mxRes = res;
			}
			else if (mnCola == cola && mxRes < res)
				mxRes = res;
		}
	}

	cout << mxRes << ' ' << mnCola;
}
