#include <iostream>
using namespace std;

int main() {
	int N, cnt = 0;
	cin >> N;

	int k = 0;
	for (int i = 1; i <= N - 2; ++i) {
		for (int j = i; (i + j) <= N - 1; ++j) {
			k = (N - i - j);
			
			if (k < j || k < i) continue;

			if (i + j > k) cnt++;
		}
	}
	cout << cnt;
}
