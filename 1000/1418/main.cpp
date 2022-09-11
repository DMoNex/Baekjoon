#include <iostream>
using namespace std;

int main() {
	int N, K, tmp;
	int arr[100001] = { 0 };
	
	cin >> N >> K;
	for (int i = 2; i <= N; ++i) {
		tmp = i;

		if (arr[i] != 0)
			continue;
		while (tmp <= N) {
			arr[tmp] = i;

			tmp += i;
		}
	}
	
	tmp = 0;
	for (int i = 1; i <= N; ++i) {
		if (arr[i] <= K)
			tmp++;
	}

	cout << tmp;
}
