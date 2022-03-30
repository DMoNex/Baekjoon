#include <iostream>
using namespace std;

int main() {
	int T, N;
	bool state[101] = { 0 };
	int gender = 0, num = 0;

	cin >> T;
	for (int i = 1; i <= T; ++i) {
		cin >> state[i];
	}

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> gender >> num;

		if (gender == 1) {
			for (int j = 1; j * num <= T; ++j) {
				state[j * num] = !state[j * num];
			}
		}
		else if (gender == 2) {
			int min = num, max = num;
			while ((min - 1) > 0 && (max + 1) <= T && state[min - 1] == state[max + 1]) {
				--min;
				++max;
			}
			for (int j = min; j <= max; ++j) {
				state[j] = !state[j];
			}
		}
	}

	for (int i = 1; i <= T; ++i) {
		cout << state[i];
		if (i % 20 == 0)
			cout << endl;
		else
			cout << ' ';
	}
}
