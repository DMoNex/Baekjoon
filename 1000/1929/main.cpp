#include <iostream>
using namespace std;

int main() {
	bool num[1000001] = { 0 };
	int M, N, tmp;

	cin >> M >> N;

	for (int i = 2; i <= N; ++i) {
		if (num[i] != true) {
			if (i >= M) cout << i << '\n';

			tmp = 0;
			while (tmp + i <= N) {
				tmp += i;
				num[tmp] = true;
			}
		}
	}
}
