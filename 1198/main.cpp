#include <iostream>
using namespace std;

int getTriangle(int ax, int ay, int bx, int by, int cx, int cy) {
	int result = 0;
	int tmp1 = (ax * by) + (bx * cy) + (cx * ay);
	int tmp2 = (bx * ay) + (cx * by) + (ax * cy);
	result = (tmp1 - tmp2);
	
	if (result < 0) result *= -1;
	
	return result;
}

int main() {
	int ptr[35][2] = { 0 };
	int N, result = 0;

	cin >> N;
	
	for (int i = 0; i < N; ++i) {
		cin >> ptr[i][0] >> ptr[i][1];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j)	break;
			for (int k = 0; k < N; ++k) {
				if (i == k) break;
				if (j == k) break;

				result = max(result, getTriangle(ptr[i][0], ptr[i][1], ptr[j][0], ptr[j][1], ptr[k][0], ptr[k][1]));
			}
		}
	}
	printf("%.9f", (double)result / 2);
}
