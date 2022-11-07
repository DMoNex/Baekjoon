#include <iostream>
using namespace std;

int main() {
	int N, M, L, ball, result = 0;
	int count[50] = { 0 };

	cin >> N >> M >> L;
	
	ball = 0;
	count[ball]++;
	while (true) {
		if (count[ball] == M)
			break;

		if (count[ball] % 2)
			ball += L;
		else
			ball -= L;

		if (ball >= N)
			ball -= N;
		if (ball < 0)
			ball += N;

		count[ball]++;
		result++;
	}

	cout << result;
}
