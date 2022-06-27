#include <iostream>
using namespace std;

int main() {
	int N;
	int score[300] = { 0 };
	int dp[300] = { 0 };
	
	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> score[i];
	
	dp[0] = score[0];
	dp[1] = dp[0] + score[1];
	dp[2] = max(score[0], score[1]) + score[2];

	for (int i = 3; i < N; ++i)
		dp[i] = max(dp[i - 2], dp[i - 3] + score[i - 1]) + score[i];

	cout << dp[N - 1];
}
