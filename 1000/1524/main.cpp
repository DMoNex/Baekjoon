#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M;

	cin >> T;
	while (T--) {
		cin >> N >> M;

		int sMax = 0, bMax = 0, tmp;
		for (int i = 0; i < N; ++i) {
			cin >> tmp;
			if (tmp > sMax)
				sMax = tmp;
		}

		for (int i = 0; i < M; ++i) {
			cin >> tmp;
			if (tmp > bMax)
				bMax = tmp;
		}

		bMax > sMax ? cout << "B\n" : cout << "S\n";
	}
}
