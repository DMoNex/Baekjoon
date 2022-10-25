#include <iostream>
using namespace std;

int main() {
	int arr[9][9] = { 0 }, max = -1, max_i = -1, max_j = -1;	

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> arr[i][j];

			if (arr[i][j] > max) {
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	cout << max << '\n' << max_i + 1 << ' ' << max_j + 1;
}
