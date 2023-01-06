#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N, M;
	string arr[50];

	cin >> N >> M;

	int emptyR = N, emptyC = M;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (arr[i][j] == 'X') {
				--emptyR;
				break;
			}
		}
	}
	for (int j = 0; j < M; ++j) {
		for (int i = 0; i < N; ++i) {
			if (arr[i][j] == 'X') {
				--emptyC;
				break;
			}
		}
	}
	cout << max(emptyC, emptyR);
}
