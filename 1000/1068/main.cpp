#include <iostream>
#include <queue>
using namespace std;

class node {
	int nodeCnt;
public:
	int parentIdx;

	node() { this->nodeCnt = 0; this->parentIdx = -1; }
	void upNodeCnt() { this->nodeCnt++; }
	void downNodeCnt() { this->nodeCnt--; }
	int getNodeCnt() { return this->nodeCnt; }
};

int main() {
	int N, del, tmp, res = 0;
	node tree[50];
	queue<int> task;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		tree[i].parentIdx = tmp;
		if (tmp != -1)
			tree[tmp].upNodeCnt();
	}

	cin >> del;
	task.push(del);
	tree[tree[del].parentIdx].downNodeCnt();
	tree[del].parentIdx = -2;
	while (!task.empty()) {
		tmp = task.front();
		task.pop();
		
		for (int i = 0; i < N; ++i) {
			if (tree[i].parentIdx == tmp) {
				task.push(i);

				tree[i].parentIdx = -2;
				tree[tmp].downNodeCnt();
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		if (tree[i].parentIdx != -2 && tree[i].getNodeCnt() == 0) {
			res++;
		}
	}

	cout << res;
}
