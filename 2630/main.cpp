#include <iostream>
using namespace std;

void del(int paper[][128], int start_x, int start_y, int len) {
	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j) {
			paper[start_x + i][start_y + j] = 2;
		}
	}
}

int check(int paper[][128], int start_x, int start_y, int len) {
	if (paper[start_x][start_y] == 2) return -1;
	
	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j) {
			if (paper[start_x][start_y] != paper[start_x + i][start_y + j])
				return -1;
		}
	}

	return paper[start_x][start_y];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num_of_white = 0, num_of_blue = 0, N, size, pos_x = 0, pos_y = 0;
	int paper[128][128] = { 0 };

	cin >> N;
	size = N;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> paper[i][j];
		}
	}

	while (size > 0) {
		int tmp;
		
		for (pos_x = 0; pos_x < N; pos_x += size) {
			for (pos_y = 0; pos_y < N; pos_y += size) {
				tmp = check(paper, pos_x, pos_y, size);
				
				switch (tmp) {
				case -1:
					break;
				case 0:
					++num_of_white;
					del(paper, pos_x, pos_y, size);
					break;
				case 1:
					++num_of_blue;
					del(paper, pos_x, pos_y, size);
					break;
				}
			}
		}
		size /= 2;
	}

	cout << num_of_white << '\n' << num_of_blue;
}
