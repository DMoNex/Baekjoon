#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, x = 0, y = 0;
	char board[10][10] = { 0 };
	string input;

	cin >> N >> input;
	for (int iter = 0; iter < input.size(); ++iter) {
		switch (input[iter]) {
		case 'D':
			if (y < N - 1) {
				if (board[y][x] == 45)
					board[y][x] = 43;
				else if (board[y][x] == 0)
					board[y][x] = 124;
				if (board[y + 1][x] == 45)
					board[y + 1][x] = 43;
				else if (board[y + 1][x] == 0)
					board[y + 1][x] = 124;
				y++;
			}
			break;
		case 'U':
			if (y > 0) {
				if (board[y][x] == 45)
					board[y][x] = 43;
				else if (board[y][x] == 0)
					board[y][x] = 124;
				if (board[y - 1][x] == 45)
					board[y - 1][x] = 43;
				else if (board[y - 1][x] == 0)
					board[y - 1][x] = 124;
				y--;
			}
			break;
		case 'L':
			if (x > 0) {
				if (board[y][x] == 124)
					board[y][x] = 43;
				else if (board[y][x] == 0)
					board[y][x] = 45;
				if (board[y][x - 1] == 124)
					board[y][x - 1] = 43;
				else if (board[y][x - 1] == 0)
					board[y][x - 1] = 45;
				x--;
			}
			break;
		case 'R':
			if (x < N - 1) {
				if (board[y][x] == 124)
					board[y][x] = 43;
				else if (board[y][x] == 0)
					board[y][x] = 45;
				if (board[y][x + 1] == 124)
					board[y][x + 1] = 43;
				else if (board[y][x + 1] == 0)
					board[y][x + 1] = 45;
				x++;
			}
			break;
		}
	}

	for (int j = 0; j < N; ++j) {
		for (int i = 0; i < N; ++i) {
			if (board[j][i] == 0)
				cout << '.';
			else
				cout << board[j][i];
		}
		cout << '\n';
	}
}
