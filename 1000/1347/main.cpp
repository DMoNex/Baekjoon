#include <iostream>
using namespace std;

int main() {
	bool maze[101][101] = { 0 }; // arr[dy][dx];
	int dx[4] = { 0, -1, 0, 1 };
	int dy[4] = { -1, 0, 1, 0 };
	int N, minX = 50, maxX = 50, minY = 50, maxY = 50, curX = 50, curY = 50;
	char cmd[50] = { 0 };

	int d_i = 0;

	cin >> N >> cmd;
	maze[50][50] = true;
	for (int i = 0; i < N; ++i) {
		switch (cmd[i]) {
		case 'R':
			d_i = (d_i + 1) % 4;
			break;
		case 'L':
			if (d_i > 0)
				d_i--;
			else
				d_i += 3;
			break;
		case 'F':
			curX += dx[d_i];
			curY += dy[d_i];
			maze[curY][curX] = true;
			
			curX > maxX ? maxX = curX : false;
			curX < minX ? minX = curX : false;
			curY > maxY ? maxY = curY : false;
			curY < minY ? minY = curY : false;
		}
	}

	for (int i = maxY; i >= minY; --i) {
		for (int j = minX; j <= maxX; ++j) {
			maze[i][j] == true ? cout << '.' : cout << '#';
		}
		cout << '\n';
	}
}
