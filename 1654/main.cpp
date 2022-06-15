#include <iostream>
using namespace std;

int main() {
	int K, N, num_of_result = 0;
	unsigned long long length[10000] = { 0 };
	unsigned long long max_length = 0, min_length = 1, result = 0;
	cin >> K >> N;

	for (int i = 0; i < K; ++i) {
		cin >> length[i];
		max_length = max(max_length, length[i]);
	}

	while (min_length <= max_length) {
		unsigned long long mid = (min_length + max_length) / 2;
		num_of_result = 0;

		for (int i = 0; i < K; ++i)
			num_of_result += (length[i] / mid);

		if (num_of_result < N) max_length = mid - 1;
		else {
			result = max(mid, result);
			min_length = mid + 1;
		}
	}

	cout << result << '\n';
}
