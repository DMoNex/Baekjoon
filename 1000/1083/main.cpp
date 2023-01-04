#include <iostream>
#include <algorithm>
using namespace std;

void solve(int* arr, int& lim, const int targetIdx, const int arrSize) {
	if (lim == 0) return;
	
	int maxIdx = targetIdx;
	int maxValue = arr[targetIdx];

	for (int i = targetIdx; i < min(arrSize, targetIdx + lim + 1); ++i) {
		if (maxValue < arr[i]) {
			maxValue = arr[i];
			maxIdx = i;
		}
	}

	for (int i = maxIdx; i > targetIdx; --i) {
		swap(arr[i], arr[i - 1]);
		lim--;
	}
}

int main() {
	int lim, N;
	int arr[50] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];
	cin >> lim;
	
	for (int i = 0; i < N; ++i)
		solve(arr, lim, i, N);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << ' ';
}
