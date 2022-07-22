#include <iostream>
#include <queue>
using namespace std;

int N, M;
int dist[101][101];
char map[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS() {
	int x, y;
	queue<pair<int, int>> path;
	
	path.push(make_pair(0, 0));
	map[0][0] = 0;
	while (!path.empty()) {
		x = path.front().first;
		y = path.front().second;
		path.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if (next_x > -1 && next_x < N && next_y > -1 && next_y < M) {
				
				if (map[next_x][next_y] == '1') {
					dist[next_x][next_y] = dist[x][y] + 1;
					map[next_x][next_y] = 0;
					path.push(make_pair(next_x, next_y));
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> map[i];

	BFS();
	cout << dist[N - 1][M - 1] + 1;
}
