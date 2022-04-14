#include <iostream>
using namespace std;

int main() {
	int N, max_count = 0, result = 1;
	char student[1000][5] = { 0 };
	int count[1000] = { 0 };

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> student[i][0] >> student[i][1] >> student[i][2] >> student[i][3] >> student[i][4];
	}

	for (int i = 0; i < N - 1; ++i) {
		for (int j = i + 1; j < N; ++j) {
			for (int k = 0; k < 5; ++k) {
				if (student[i][k] == student[j][k]) {
					++count[i];
					++count[j];
					break;
				}
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		if (max_count < count[i]) {
			max_count = count[i];
			result = i + 1;
		}
	}

	cout << result;
}
