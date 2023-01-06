#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int id;
	int imp;
};

int getMaxImp(int* arr) {
	for (int i = 9; i > 0; --i) {
		if (arr[i] != 0) return i;
	}
}

int main() {
	int T, N, dst, order, maxImp, result;
	cin >> T;

	while (T--) {
		queue<node> que;
		int count[10] = { 0 };
		node tmpNode;
		cin >> N >> dst;
		for (int i = 0; i < N; ++i) {
			cin >> order;
			tmpNode.id = i;
			tmpNode.imp = order;
			que.push(tmpNode);
			count[order]++;
		}
		result = 1;
		
		while (true) {
			maxImp = getMaxImp(count);
			if (que.front().imp == maxImp) {
				if (que.front().id == dst) {
					cout << result << '\n';
					break;
				}
				else {
					que.pop();
					result++;
					count[maxImp]--;
				}
			}
			else {
				que.push(que.front());
				que.pop();
			}
		}
	}
}
