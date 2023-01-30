#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, N, M, cnt;
	long long sumA, sumB, tmp;
	vector<long long> arrA;
	cin >> T;

	while (T--) {
		sumA = 0;
		sumB = 0;
		cnt = 0;
		arrA.clear();

		cin >> N >> M;

		for (int i = 0; i < N; ++i) {
			cin >> tmp;
			arrA.push_back(tmp);
			sumA += tmp;
		}

		for (int i = 0; i < M; ++i) {
			cin >> tmp;
			sumB += tmp;
		}

		for (int i = 0; i < arrA.size(); ++i) {
			if (arrA[i] * N < sumA && arrA[i] * M > sumB) {
				cnt++;
			}
		}

		cout << cnt << '\n';
	}
}
