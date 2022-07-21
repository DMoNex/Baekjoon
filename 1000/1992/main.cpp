#include <iostream>
#include <string>
using namespace std;

void check(int N, int area[][64], int size, int pos_x, int pos_y, int lim_x, int lim_y) {
	for (int cur_x = pos_x; cur_x < lim_x; cur_x += size) {
		for (int cur_y = pos_y; cur_y < lim_y; cur_y += size) {
			bool flag = true;

			for (int i = 0; i < size; ++i) {
				for (int j = 0; j < size; ++j) {
					if (area[cur_x][cur_y] != area[cur_x + i][cur_y + j]) {
						flag = false;
						cout << '(';
						check(N, area, size / 2, cur_x, cur_y, cur_x + size, cur_y + size);
						cout << ')';
						break;
					}
				}
				if (flag == false) break;
			}

			if (flag == true) cout << area[cur_x][cur_y];
		}
	}
}

int main() {
	int N, pos_x = 0, pos_y = 0;
	int area[64][64] = { 0 };
	string input;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> input;

		for (int j = 0; j < N; ++j)
			area[i][j] = input[j] - '0';
	}

	check(N, area, N, pos_x, pos_y, N, N);
}
