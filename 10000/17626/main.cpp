#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	int DP[50001] = { 0 };
	
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		tmp = 2147483647;
		for (int j = 1; j * j <= i; ++j)
			tmp = min(tmp, DP[i - j * j]);
		DP[i] = tmp + 1;
	}

	cout << DP[N];
}
