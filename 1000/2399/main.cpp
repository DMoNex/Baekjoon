#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[10000] = { 0 };
	long long sum = 0;

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			sum += (arr[i] > arr[j] ? arr[i] - arr[j] : arr[j] - arr[i]);

	cout << sum;
}
