#include <iostream>
using namespace std;

int main() {
	int sx, sy, N, ox, oy;
	float min, tmp;
	cin >> sx >> sy >> N;

	min = (float)sx / sy * 1000;

	for(int i = 0; i < N; ++i) {
		cin >> ox >> oy;
		
		tmp = (float)ox / oy * 1000;
		if (min > tmp) {
			min = tmp;
		}
	}

	printf("%.2f", min);
}
