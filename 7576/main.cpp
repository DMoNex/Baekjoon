#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N, tmp, result = 0, num_of_raw = 0;
	int area[1000][1000] = { 0 };
	queue<pair<int, int>> node;
	
	cin >> M >> N;
	for (int j = 0; j < N; ++j) {
		for (int i = 0; i < M; ++i) {
			cin >> tmp;
			
			area[i][j] = tmp;
			if (tmp == 1)
				node.push(make_pair(i, j));
			else if (tmp == 0)
				num_of_raw++;
		}
	}
	
	int now_x, now_y;
	node.push(make_pair(-2, -2));
	while (node.size() > 1) {
		now_x = node.front().first;
		now_y = node.front().second;
		node.pop();

		if (now_x == -2 && now_y == -2) {
			node.push(make_pair(-2, -2));
			result++;
			continue;
		}
		if (now_x > 0 && area[now_x - 1][now_y] == 0) {
			area[now_x - 1][now_y] = 1;
			node.push(make_pair(now_x - 1, now_y));
			num_of_raw--;
		}
		if (now_x < M - 1 && area[now_x + 1][now_y] == 0) {
			area[now_x + 1][now_y] = 1;
			node.push(make_pair(now_x + 1, now_y));
			num_of_raw--;
		}
		if (now_y > 0 && area[now_x][now_y - 1] == 0) {
			area[now_x][now_y - 1] = 1;
			node.push(make_pair(now_x, now_y - 1));
			num_of_raw--;
		}
		if (now_y < N - 1 && area[now_x][now_y + 1] == 0) {
			area[now_x][now_y + 1] = 1;
			node.push(make_pair(now_x, now_y + 1));
			num_of_raw--;
		}
	}
	
	if (num_of_raw != 0)
		cout << -1;
	else
		cout << result;
}
