#include <iostream>
using namespace std;

int main() {
	int T, N;
	int arr[10] = { 1, 2, 4 };

	for (int i = 3; i < 10; ++i)
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];

	cin >> T;
	while (T--) {
		cin >> N;
		cout << arr[N - 1] << '\n';
	}
}
