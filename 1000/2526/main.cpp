#include <iostream>
using namespace std;

int main() {
	int numCheck[1001] = { 0 };
	int N, P, cur, cnt = 1;

	cin >> N >> P;
	cur = (N * N) % P;

	while (!numCheck[cur]) {
		numCheck[cur] = cnt++;
		cur = (cur * N) % P;
	}

	cout << cnt - numCheck[cur];
}
