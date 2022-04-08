#include <iostream>
using namespace std;

int main() {
	int N, T, R, m, M, result = 0, exerTime = 0, cur_m;

	cin >> N >> m >> M >> T >> R;

	if (M - m < T) {
		cout << -1;
		return 0;
	}

	cur_m = m;
	while (exerTime < N) {
		cur_m = max(cur_m, m);

		if (cur_m + T <= M) {
			++exerTime;
			cur_m += T;
		}
		else cur_m -= R;

		++result;
	}

	cout << result;
}
