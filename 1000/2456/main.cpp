#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int score[3] = { 0 }, threeCnt[3] = { 0 };
	int N, a, b, c, cnt = 0;
	int maxValue = 0, resIdx = 0, maxThreeCnt = 0;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> a >> b >> c;
		score[0] += a;
		score[1] += b;
		score[2] += c;

		maxValue < score[0] ? maxValue = score[0] : false;
		maxValue < score[1] ? maxValue = score[1] : false;
		maxValue < score[2] ? maxValue = score[2] : false;

		if (a == 3) threeCnt[0]++;
		if (b == 3) threeCnt[1]++;
		if (c == 3) threeCnt[2]++;

		maxThreeCnt < threeCnt[0] ? maxThreeCnt = threeCnt[0] : false;
		maxThreeCnt < threeCnt[1] ? maxThreeCnt = threeCnt[1] : false;
		maxThreeCnt < threeCnt[2] ? maxThreeCnt = threeCnt[2] : false;
	}

	for (int i = 0; i < 3; ++i) {
		if (maxValue == score[i]) {
			cnt++;
			resIdx = i;
		}
	}

	if (cnt > 1) {
		if (cnt == 2) {
			for (int i = 0; i < 2; ++i) {
				for (int j = i + 1; j < 3; ++j) {
					if (maxValue == score[i] && maxValue == score[j]) {
						if (threeCnt[i] == threeCnt[j])
							cout << 0 << ' ' << maxValue;
						else
							cout << (threeCnt[i] > threeCnt[j] ? i + 1 : j + 1) << ' ' << maxValue;
					}
				}
			}
		}
		else {
			int tmpCnt = 0, tmpIdx = 0;

			for (int i = 0; i < 3; ++i) {
				if (maxThreeCnt == threeCnt[i]) {
					tmpCnt++;
					tmpIdx = i;
				}
			}

			if (tmpCnt == 1)
				cout << tmpIdx + 1 << ' ' << maxValue;
			else
				cout << 0 << ' ' << maxValue;
		}
	}
	else
		cout << resIdx + 1 << ' ' << maxValue;
}
