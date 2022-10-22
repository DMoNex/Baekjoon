#include <iostream>
using namespace std;

int main() {
	int N, totalScore = 0, curScore = 1;
	bool sol[100] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> sol[i];

	for (int i = 0; i < N; ++i) {
		if (sol[i])
			totalScore += curScore++;
		else
			curScore = 1;
	}

	cout << totalScore;
}
