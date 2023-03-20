#include <iostream>
#include <vector>
using namespace std;

int main() {
	bool flag = true;
	int N, cnt = 0;

	cin >> N;
	vector<pair<int, int>> arr(N);
	for (int i = 0; i < N; ++i)
		cin >> arr[i].first >> arr[i].second;

	for (int i = 0; i < N; ++i) {
		flag = true;

		for (int j = 0; j < N; ++j) {
			if (i == j) continue;
			
			if (arr[i].first >= arr[j].first && arr[i].second >= arr[j].second) {
				flag = false;
				break;
			}
			if (arr[i].second >= arr[j].second && arr[i].first >= arr[j].first) {
				flag = false;
				break;
			}
		}

		if (flag)
			cnt++;
	}

	cout << cnt;
}
