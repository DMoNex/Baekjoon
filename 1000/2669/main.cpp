#include <iostream>
using namespace std;

int main() {
	int x1, x2, y1, y2, res = 0;
	bool field[100][100] = { 0 };
	
	for (int i = 0; i < 4; ++i) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1 - 1; j < x2 - 1; ++j) {
			for (int k = y1 - 1; k < y2 - 1; ++k) {
				field[j][k] = true;
			}
		}
	}

	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < 100; ++j) {
			if (field[i][j] == true)
				res++;
		}
	}

	cout << res;
}
