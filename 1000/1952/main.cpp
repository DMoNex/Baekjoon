#include <iostream>
using namespace std;

int main() {
	int M, N, x = 0, y = 0, dir = 0, result = 0;
	bool check[100][100] = { 0 };
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	cin >> M >> N;

	while (true) {
		if (check[y][x] == true) {
			cout << result - 1;
			break;
		}

		check[y][x] = true;

		if ((y + dy[dir] < 0) || (y + dy[dir] >= M) || (x + dx[dir] < 0) || (x + dx[dir] >= N) || check[y + dy[dir]][x + dx[dir]] == true) {
			dir = (dir + 1) % 4;
			result++;
		}
		y += dy[dir];
		x += dx[dir];
	}
}
