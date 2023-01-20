#include <iostream>
using namespace std;

int main() {
	int N, K, sum = 0, max = 0;
	int arr[100] = { 0 };

	cin >> N >> K;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	for (int i = 0; i < K; ++i)
		sum += arr[i];

	max = sum;
	for (int i = 0; i + K < N; ++i) {
		sum += arr[i + K];
		sum -= arr[i];

		max < sum ? max = sum : false;
	}

	cout << max;
}
