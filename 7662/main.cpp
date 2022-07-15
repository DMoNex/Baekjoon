#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, input;
	char cmd;
	map<int, unsigned int> numCount;
	priority_queue<int, vector<int>, greater<int>> minheap;
	priority_queue<int, vector<int>, less<int>> maxheap;

	cin >> T;
	while (T--) {
		while (!minheap.empty())
			minheap.pop();
		while (!maxheap.empty())
			maxheap.pop();
		numCount.clear();

		cin >> N;
		
		while (N--) {
			cin >> cmd >> input;

			if (cmd == 'I') {
				minheap.push(input);
				maxheap.push(input);
				if (numCount.count(input) == 0)
					numCount[input] = 1;
				else
					numCount[input]++;
			}
			else if (cmd == 'D') {
				if (input == 1) {
					while (!maxheap.empty() && numCount[maxheap.top()] == 0)
						maxheap.pop();
					
					if (!maxheap.empty()) {
						numCount[maxheap.top()]--;
						maxheap.pop();
					}
				}
					
				if (input == -1) {
					while (!minheap.empty() && numCount[minheap.top()] == 0)
						minheap.pop();

					if (!minheap.empty()) {
						numCount[minheap.top()]--;
						minheap.pop();
					}
				}

			}
		}

		while (!maxheap.empty() && numCount[maxheap.top()] == 0)
			maxheap.pop();
		while (!minheap.empty() && numCount[minheap.top()] == 0)
			minheap.pop();

		if (!minheap.empty() && !maxheap.empty())
			cout << maxheap.top() << ' ' << minheap.top() << '\n';
		else
			cout << "EMPTY\n";
	}
}
