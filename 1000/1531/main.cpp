#include <iostream>
using namespace std;

void up(int arr[][100], int x1, int y1, int x2, int y2) {
	for (int i = x1; i <= x2; ++i)
		for (int j = y1; j <= y2; ++j)
			arr[i][j]++;
}

int main() {
	int N, M, x1, y1, x2, y2, result = 0;
	int pr[100][100] = { 0 };

	cin >> N >> M;
	while (N--) {
		cin >> x1 >> y1 >> x2 >> y2;
		
		up(pr, x1 - 1, y1 - 1, x2 - 1, y2 - 1);
	}

	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			if (pr[i][j] > M)
				result++;

	cout << result;
}
