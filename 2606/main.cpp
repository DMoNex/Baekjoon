#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main() {
	int N, M, A, B;
	stack<int> DPS;
	set<int> result;
	cin >> N >> M;

	bool arr[100][100] = { 0 };

	while (M--) {
		cin >> A >> B;
		arr[A - 1][B - 1] = true;
		arr[B - 1][A - 1] = true;
	}

	result.insert(0);
	DPS.push(0);
	while (!DPS.empty()) {
		int tmp = DPS.top();
		DPS.pop();

		for (int i = 0; i < N; ++i) {
			if (arr[tmp][i] == true && result.find(i) == result.end()) {
				result.insert(i);
				DPS.push(i);
			}
		}
	}

	cout << result.size() - 1;
}
