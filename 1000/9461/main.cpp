#include <iostream>
using namespace std;

int main() {
	int T,N;
	unsigned long dp[100] = { 1, 1, 1, 2, 2 };

	for (int i = 5; i < 100; ++i)
		dp[i] = dp[i - 1] + dp[i - 5];

	cin >> T;
	while (T--) {
		cin >> N;
		cout << dp[N - 1] << '\n';
	}
}
