#include <iostream>
using namespace std;

int main() {
	int N, Q, quest;
	int time[102] = { 0 };

	cin >> N >> Q;
	for (int i = 0; i < N; ++i) {
		cin >> time[i + 1];
		time[i + 1] += time[i];
	}
	
	while (Q--) {
		int i = 0;

		cin >> quest;
		for (i = 0; i <= N; ++i) {
			if (quest < time[i + 1]) {
				cout << i + 1 << '\n';
				break;
			}
		}
	}
}
