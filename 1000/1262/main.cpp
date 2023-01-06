#include <iostream>
using namespace std;

int main() {
	int N, r1, r2, c1, c2, diaSize = 0;

	cin >> N >> r1 >> c1 >> r2 >> c2;

	diaSize = 2 * N - 1;

	for (int i = r1; i <= r2; ++i) {
		for (int j = c1; j <= c2; ++j) {
			int x = i % diaSize;
			int y = j % diaSize;
			int distance = abs(N - 1 - x) + abs(N - 1 - y);

			if (distance >= N) cout << '.';
			else cout << (char)(97 + (distance % 26));
		}
		cout << endl;
	}
}
