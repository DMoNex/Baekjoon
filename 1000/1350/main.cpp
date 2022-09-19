#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long result = 0;
	int N, cluster;
	int file[50] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> file[i];
	cin >> cluster;

	for (int i = 0; i < N; ++i) {
		result += file[i] / cluster;
		if (file[i] % cluster != 0)
			result++;
	}

	cout << result * cluster;
}
