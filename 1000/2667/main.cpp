#include <iostream>
#include <algorithm>
using namespace std;

void check(char map[][26], int N, int start_x, int start_y, int count, int* cntNum) {
	if (map[start_x][start_y] == '1') {
		map[start_x][start_y] = count;
		cntNum[count]++;

		if (start_x > 0 && map[start_x - 1][start_y] == '1') check(map, N, start_x - 1, start_y, count, cntNum);
		if (start_y > 0 && map[start_x][start_y - 1] == '1') check(map, N, start_x, start_y - 1, count, cntNum);
		if (start_x < N - 1 && map[start_x + 1][start_y] == '1') check(map, N, start_x + 1, start_y, count, cntNum);
		if (start_y < N - 1 && map[start_x][start_y + 1] == '1') check(map, N, start_x, start_y + 1, count, cntNum);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, result = 1;
	char map[26][26];
	int count[350] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			cin >> map[i][j];

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			if (map[i][j] == '1')
				check(map, N, i, j, result++, count);
			
	sort(count + 1, count + result);

	cout << result - 1 << '\n';
	for (int i = 1; i < result; ++i) {
		cout << count[i] << '\n';
	}
}
