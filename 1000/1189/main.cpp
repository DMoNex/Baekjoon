#include <iostream>
using namespace std;

#define DIRECT_UP 0
#define DIRECT_RIGHT 1
#define DIRECT_LEFT 2
#define DIRECT_DOWN 3

void track(int R, int C, int K, int now_x, int now_y, bool map[][5], int count, int* result) {
	if (K == count) {
		if (now_x == 0 && now_y == C - 1) {
			(*result)++;
		}
		return;
	}

	int direction = DIRECT_UP;

	while (direction < 4) {
		if (direction == DIRECT_UP && (now_x > 0) && map[now_x - 1][now_y] == true) {
			map[now_x - 1][now_y] = false;
			track(R, C, K, now_x - 1, now_y, map, count + 1, result);
			map[now_x - 1][now_y] = true;
		}
		else if (direction == DIRECT_RIGHT && (now_y < C - 1) && map[now_x][now_y + 1] == true) {
			map[now_x][now_y + 1] = false;
			track(R, C, K, now_x, now_y + 1, map, count + 1, result);
			map[now_x][now_y + 1] = true;
		}
		else if (direction == DIRECT_LEFT && (now_y > 0) && map[now_x][now_y - 1] == true) {
			map[now_x][now_y - 1] = false;
			track(R, C, K, now_x, now_y - 1, map, count + 1, result);
			map[now_x][now_y - 1] = true;
		}
		else if (direction == DIRECT_DOWN && (now_x < R - 1) && map[now_x + 1][now_y] == true) {
			map[now_x + 1][now_y] = false;
			track(R, C, K, now_x + 1, now_y, map, count + 1, result);
			map[now_x + 1][now_y] = true;
		}
		
		++direction;
	}
}

int main() {
	int R, C, K;
	bool map[5][5] = { 0 };
	char tmp;
	int pos_x = 0, pos_y = 0, result = 0;

	cin >> R >> C >> K;
	getchar();

	for (int i = 0; i < R; ++i) {
		for (int j = 0; j <= C; ++j) {
			tmp = getchar();

			if (tmp == '.') {
				map[i][j] = true;
			}
			else if (tmp == 'T') {
				map[i][j] = false;
			}
		}
	}
	
	pos_x = R - 1;

	map[pos_x][pos_y] = false;
	track(R, C, K, pos_x, pos_y, map, 1, &result);

	cout << result;
}
