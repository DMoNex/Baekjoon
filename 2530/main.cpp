#include <iostream>
using namespace std;

int main() {
	int H, M, S, during = 0;

	cin >> H >> M >> S >> during;

	S += during;

	while (S > 59) {
		S -= 60;
		++M;
	}

	while (M > 59) {
		M -= 60;
		++H;
	}

	while (H > 23) {
		H -= 24;
	}

	cout << H << ' ' << M << ' ' << S;
}
