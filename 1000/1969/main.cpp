#include <iostream>
#include <vector>
using namespace std;

int min(int x, int y) {
	return x > y ? y : x;
}

int main() {
	int N, M, cnt[4] = { 0 }, tmp, totalCnt = 0;
	char result[51] = { 0 };

	cin >> N >> M;
	vector<string> DNA(N);

	for (int i = 0; i < N; ++i)
		cin >> DNA[i];
	
	for (int k = 0; k < M; ++k) {
		tmp = N;
		cnt[0] = 0;
		cnt[1] = 0;
		cnt[2] = 0;
		cnt[3] = 0;
		for (int i = 0; i < N; ++i) {
			if (DNA[i][k] != 'A')
				cnt[0]++;
			if (DNA[i][k] != 'C')
				cnt[1]++;
			if (DNA[i][k] != 'G')
				cnt[2]++;
			if (DNA[i][k] != 'T')
				cnt[3]++;
		}

		totalCnt += min(min(cnt[0], cnt[1]), min(cnt[2], cnt[3]));

		tmp = cnt[0];
		result[k] = 'A';
		if (tmp > cnt[1]) {
			tmp = cnt[1];
			result[k] = 'C';
		}
		if (tmp > cnt[2]) {
			tmp = cnt[2];
			result[k] = 'G';
		}
		if (tmp > cnt[3]) {
			tmp = cnt[3];
			result[k] = 'T';
		}
	}

	cout << result << '\n' << totalCnt;
}
