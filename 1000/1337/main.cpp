#include <iostream>
#include <algorithm>
using namespace std;

int check(int* arr, int N, int i) {
	int res = 1;

	for (int j = 1; j < 5; ++j) {
		if (i + j < N) {
			if (arr[i + j] - arr[i] > 4)
				return res;
			else
				++res;
		}
		else
			break;
	}
	
	return res;
}

int main() {
	int N, cnt = 1, res = 0;
	int arr[50] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	if (N == 1) {
		cout << 4;
		return 0;
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; ++i) {
		cnt = check(arr, N, i);

		res < cnt ? res = cnt : false;
	}

	cout << 5 - res;
}
