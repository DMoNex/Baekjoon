#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

void dfs(int N, int V, bool arr[][1000], bool* checkNode) {
	if (checkNode[V] == true) return;

	cout << V + 1 << ' ';
	checkNode[V] = true;

	for (int i = 0; i < N; ++i) {
		if (V == i) continue;
		if (arr[V][i] == true) {
			dfs(N, i, arr, checkNode);
		}
	}
}

void bfs(int N, queue<int>* que, bool arr[][1000], bool* checkNode) {
	while (!que->empty()) {
		int V = que->front();
		que->pop();

		cout << V + 1 << ' ';
		checkNode[V] = true;

		for (int i = 0; i < N; ++i) {
			if (arr[V][i] == true && checkNode[i] != true) {
				que->push(i);
				checkNode[i] = true;
			}
		}
	}
}

int main() {
	int N, M, V, a, b;
	bool arr[1000][1000] = { 0 };
	bool checkNode[1000] = { 0 };
	queue<int> que;

	cin >> N >> M >> V;
	que.push(V - 1);

	for (int i = 0; i < M; ++i) {
		cin >> a >> b;
		arr[a - 1][b - 1] = arr[b - 1][a - 1] = true;
	}

	dfs(N, V - 1, arr, checkNode);
	cout << endl;
	memset(checkNode, 0, sizeof(checkNode));
	bfs(N, &que, arr, checkNode);
}
