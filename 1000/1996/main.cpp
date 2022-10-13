#include <iostream>
#include <string.h>
using namespace std;

void convert(char result[][1001], char cnt, int y, int x, int N) {
	for (int i = y - 1; i < y + 2; ++i) {
		if (i < 0) continue;
		if (i >= N) continue;
		for (int j = x - 1; j < x + 2; ++j) {
			if (j < 0) continue;
			if (j >= N) continue;
			if (result[i][j] == '*') continue;

			if (i == y && j == x)
				result[i][j] = '*';
			else {
				if (result[i][j] != 'M')
					result[i][j] += cnt - '0';
			}
			
			if (result[i][j] > '9')
				result[i][j] = 'M';
		}
	}
}

int main() {
	char input[1001][1001];
	char result[1001][1001];
	int N;

	memset(result, '0', sizeof(result));

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> input[i];

	for(int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (input[i][j] != '.')
				convert(result, input[i][j], i, j, N);
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << result[i][j];
		}
		cout << '\n';
	}
}
