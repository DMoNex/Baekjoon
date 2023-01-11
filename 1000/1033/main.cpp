#include <iostream>
#include <queue>
using namespace std;

int gcd(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int lcm(int a, int b) {
	return a * (b / gcd(a, b));
}

class node {
public:
	int first;
	int second;

	node() {
		this->first = 0; this->second = 0;
	}
};

int main() {
	node input[10][10];
	int firstIdx, secondIdx, firstRate, secondRate;
	long long amount[10] = { 0 };
	queue<int> workingQueue;
	int N, curNode = 0, curLcm = 0, curGcd = 0, curNodeValue;
	
	// input
	cin >> N;
	for (int i = 0; i < N - 1; ++i) {
		cin >> firstIdx >> secondIdx >> firstRate >> secondRate;

		// 정방향
		input[firstIdx][secondIdx].first = firstRate;
		input[firstIdx][secondIdx].second = secondRate;

		// 역방향
		input[secondIdx][firstIdx].first = secondRate;
		input[secondIdx][firstIdx].second = firstRate;
	}

	workingQueue.push(0);
	while (!workingQueue.empty()) {
		curNode = workingQueue.front();
		workingQueue.pop();

		for (int i = 0; i < N; ++i) {
			if (i == curNode) continue;

			// 입력을 받은 케이스에 한하여
			if (input[curNode][i].first != 0 && input[curNode][i].second != 0) {
				// 양쪽 다 비어있으면 최초 (그대로 대입)
				if (amount[curNode] == 0 && amount[i] == 0) {
					amount[curNode] = input[curNode][i].first;
					amount[i] = input[curNode][i].second;

					// BFS. 다음 노트를 queue에 삽입
					workingQueue.push(i);
				}
				// 뒤만 비어있으면 전체 업데이트 필요
				else if (amount[curNode] != 0 && amount[i] == 0) {
					// 최소공배수 구함
					curLcm = lcm(amount[curNode], input[curNode][i].first);
					
					// 업데이트(최소공배수)
					curNodeValue = amount[curNode];
					for (int j = 0; j < N; ++j)
						amount[j] *= (curLcm / curNodeValue);

					// 새로 대입할 값도 업데이트(최소공배수)
					amount[i] = input[curNode][i].second * (curLcm / input[curNode][i].first);

					// BFS. 다음 노트를 queue에 삽입
					workingQueue.push(i);
				}
			}
		}
	}

	curGcd = gcd(amount[0], amount[1]);
	for (int i = 2; i < N; ++i)
		curGcd = gcd(curGcd, amount[i]);

	for (int i = 0; i < N; ++i)
		cout << amount[i] / curGcd << ' ';
}
