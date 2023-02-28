#include <iostream>
using namespace std;

int main() {
	int score[5] = { 0 };
	int input;

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 4; ++j) {
			cin >> input;
			score[i] += input;
		}
	}

	int maxScore = 0, maxIdx = 0;
	for (int i = 0; i < 5; ++i) {
		if (maxScore < score[i]) {
			maxScore = score[i];
			maxIdx = i;
		}
	}

	cout << maxIdx + 1 << ' ' << maxScore;
}
