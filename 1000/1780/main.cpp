#include <iostream>
using namespace std;

bool check(int N, int paper[][2188], int pos_x, int pos_y, int size) {
	if (pos_x + size > N || pos_y + size > N) return false;

	int tmp = paper[pos_x][pos_y];

	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			if (tmp != paper[pos_x + i][pos_y + j])
				return false;

	return true;
}

void mark(int N, int paper[][2188], int pos_x, int pos_y, int size) {
	if (pos_x + size > N || pos_y + size > N) return;

	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			paper[pos_x + i][pos_y + j] = 2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int paper[2188][2188] = { 0 }, result[3] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			cin >> paper[i][j];

	int size = N, pos_x = 0, pos_y = 0;
	while (size > 0) {
		for (int i = pos_x; i < N; i += size) {
			for (int j = pos_y; j < N; j += size) {
				if (paper[i][j] == 2) continue;

				if (check(N, paper, i, j, size)) {
					result[paper[i][j] + 1]++;
					mark(N, paper, i, j, size);
				}
			}
		}
		size /= 3;
	}

	cout << result[0] << '\n' << result[1] << '\n' << result[2];
}
