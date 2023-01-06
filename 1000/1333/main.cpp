#include <iostream>
using namespace std;

int main() {
	int N, L, D, time = 0;

	cin >> N >> L >> D;

	for (int i = 0; i < N; ++i) {
		time += L;

		for (int j = 0; j < 5; ++j) {
			if (time % D == 0) {
				cout << time;
				return 0;
			}
			++time;
		}
	}

	int tmp = 0;
	while (tmp < time) {
		tmp += D;
	}
	
	cout << tmp;
}
