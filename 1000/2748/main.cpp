#include <iostream>
using namespace std;

int main() {
	int N;
	long long arr[91] = { 0 };
	arr[1] = 1;

	cin >> N;
	for (int i = 2; i <= N; ++i)
		arr[i] = arr[i - 2] + arr[i - 1];

	cout << arr[N];
}
