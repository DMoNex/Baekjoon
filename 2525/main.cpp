#include <iostream>
using namespace std;

int main() {
	int H, M, during = 0;

	cin >> H >> M >> during;

	M += during;

	while (M > 59) {
		M -= 60;
		++H;
	}

	while (H > 23) {
		H -= 24;
	}

	cout << H << ' ' << M;
}
