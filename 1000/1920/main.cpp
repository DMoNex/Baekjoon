#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[100000] = { 0 };
	int N, M, left, right, mid, num;
	bool flag = false;

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	sort(arr, arr + N);

	cin >> M;
	while (M--) {
		cin >> num;
		flag = false;
		left = 0; right = N - 1;

		while (left <= right) {
			mid = (left + right) / 2;

			if (num == arr[mid]) {
				cout << 1 << '\n';
				flag = true;
				break;
			}
			else if (num > arr[mid])
				left = mid + 1;
			else
				right = mid - 1;
		}

		if (!flag) cout << 0 << '\n';
	}
}
