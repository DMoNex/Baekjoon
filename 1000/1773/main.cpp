#include <iostream>
using namespace std;

int main() {
	int N, time, arr[100] = { 0 }, result = 0;
	bool cnt[2000001] = { 0 };

	cin >> N >> time;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	for (int i = 0; i < N; ++i) {
		for (int j = arr[i]; j <= time; j += arr[i]) {
			cnt[j] = true;
		}
	}

	for (int i = 0; i <= time; ++i) {
		if (cnt[i])
			result++;
	}

	cout << result;
}
