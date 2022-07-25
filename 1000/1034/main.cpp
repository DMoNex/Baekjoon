#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M, K, result = 0, tmp;
	string arr[50];

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}
	cin >> K;

	for (int i = 0; i < N; ++i) {
		int num_of_zero = 0;
		
		for (int j = 0; j < M; ++j) {
			if (arr[i][j] == '0') ++num_of_zero;
		}

		if (num_of_zero > K) continue;
		if (K % 2 == num_of_zero % 2) {
			tmp = 0;
			for (int j = 0; j < N; ++j)
				if (arr[i] == arr[j]) ++tmp;
			
			result = max(result, tmp);
		}
	}

	cout << result;
}
