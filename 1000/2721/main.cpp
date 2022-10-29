#include <iostream>
using namespace std;

int main() {
	long long result[301] = { 0 };
	int T, input, arr[302] = { 0 };
	arr[0] = 0;
	arr[1] = 1;
	result[0] = 0;

	for (int i = 2; i < 302; ++i) {
		arr[i] = arr[i - 1] + i;
		result[i - 1] = result[i - 2] + (i - 1) * arr[i];
	}

	cin >> T;
	while (T--) {
		cin >> input;
		cout << result[input] << '\n';
	}
}
