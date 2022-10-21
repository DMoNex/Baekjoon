#include <iostream>
using namespace std;

int main() {
	int N, K, result = 0, cnt = 0;
	
	cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		if (N % i == 0) {
			cnt++;

			if (cnt == K) {
				result = i;
				break;
			}
		}
	}

	cout << result;
}
