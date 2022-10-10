#include <iostream>
using namespace std;

int main() {
	int N, M, w, cur = 0, result = 0;

	cin >> N >> M;

	if (N == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < N; ++i) {
		cin >> w;

		if (cur + w <= M) {
			cur += w;
		}
		else {
			cur = w;
			result++;
		}
	}

	cout << result + 1;
}
