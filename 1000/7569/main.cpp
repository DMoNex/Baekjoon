#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int m, n, h;

	node() {
		this->m = 0;
		this->n = 0;
		this->h = 0;
	}
	node(int m, int n, int h) {
		this->m = m;
		this->n = n;
		this->h = h;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, N, H, time = 0, checkSize = 0;
	int tomato[100][100][100] = { 0 };
	queue<node> actionQ;

	int curM, curN, curH;

	cin >> M >> N >> H;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < M; ++k) {
				cin >> tomato[k][j][i];

				if (tomato[k][j][i] == 1) {
					actionQ.push(node(k, j, i));
				}
			}
		}
	}

	while (!actionQ.empty()) {
		checkSize = actionQ.size();
		
		for (int i = 0; i < checkSize; ++i) {
			curM = actionQ.front().m;
			curN = actionQ.front().n;
			curH = actionQ.front().h;
			actionQ.pop();

			if (curM > 0 && tomato[curM - 1][curN][curH] == 0) {
				tomato[curM - 1][curN][curH] = 1;
				actionQ.push(node(curM - 1, curN, curH));
			}
			if (curM < M - 1 && tomato[curM + 1][curN][curH] == 0) {
				tomato[curM + 1][curN][curH] = 1;
				actionQ.push(node(curM + 1, curN, curH));
			}

			if (curN > 0 && tomato[curM][curN - 1][curH] == 0) {
				tomato[curM][curN - 1][curH] = 1;
				actionQ.push(node(curM, curN - 1, curH));
			}
			if (curN < N - 1 && tomato[curM][curN + 1][curH] == 0) {
				tomato[curM][curN + 1][curH] = 1;
				actionQ.push(node(curM, curN + 1, curH));
			}

			if (curH > 0 && tomato[curM][curN][curH - 1] == 0) {
				tomato[curM][curN][curH - 1] = 1;
				actionQ.push(node(curM, curN, curH - 1));
			}
			if (curH < H - 1 && tomato[curM][curN][curH + 1] == 0) {
				tomato[curM][curN][curH + 1] = 1;
				actionQ.push(node(curM, curN, curH + 1));
			}
		}

		time++;
	}

	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < M; ++k) {
				if (tomato[k][j][i] == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << time - 1;
}
