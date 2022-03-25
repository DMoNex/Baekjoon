#include <iostream>
using namespace std;

void solve(int N, int S, int* arr, int i, int sum, int* count) {
	sum += arr[i];
	if (sum == S) {
		(*count)++;
	}
	for (int j = 1; j < (N - i); ++j) {
		solve(N, S, arr, (i + j), sum, count);
	}
}

int main() {
	int N, S, result = 0;
	int arr[20];

	cin >> N >> S;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i) {
		solve(N, S, arr, i, 0, &result);
	}

	cout << result;
}
