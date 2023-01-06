#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int main() {
	int N, start, end, cur;
	int arr[10000] = { 0 };
	int check[10000];
	queue<int> que;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}
	cin >> start >> end;
	--start; --end;

	if (start == end) {
		cout << 0;
		return 0;
	}

	memset(check, -1, sizeof(check));
	que.push(start);
	check[start] = 0;

	while (!que.empty()) {
		cur = que.front();
		que.pop();

		for (int i = 0; i < N; ++i) {
			if ((i - cur) % arr[cur] == 0 && check[i] == -1 && i != cur) {
				que.push(i);
				check[i] = check[cur] + 1;
				if (i == end) {
					cout << check[i];
					return 0;
				}
			}
		}
	}

	cout << check[end];
}
