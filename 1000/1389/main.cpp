#include <iostream>
using namespace std;

#define INT_MAX 2147483647

int min(int A, int B) { return A < B ? A : B; }

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, a, b, result = INT_MAX, result_index;
	int relation[100][100] = { 0 };

	cin >> N >> M;
	while (M--) {
		cin >> a >> b;
		relation[a - 1][b - 1] = 1;
		relation[b - 1][a - 1] = 1;
	}

	for (int k = 0; k < N; ++k) {
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (i == j) continue;
				if (relation[i][k] != 0 && relation[k][j] != 0) {
					if (relation[i][j] == 0)
						relation[i][j] = relation[i][k] + relation[k][j];
					else
						relation[i][j] = min(relation[i][j], relation[i][k] + relation[k][j]);
				}
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		int tmp = 0;

		for (int j = 0; j < N; ++j)
			tmp += relation[i][j];

		if (result > tmp) {
			result = tmp;
			result_index = i + 1;
		}
	}

	cout << result_index;
}
