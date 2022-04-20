#include <iostream>
using namespace std;

int main() {
	int S1, S2, S3, max_i = 0, max_count = 0;
	int count[81] = { 0 };

	cin >> S1 >> S2 >> S3;

	for (int i = 1; i <= S1; ++i) {
		for (int j = 1; j <= S2; ++j) {
			for (int k = 1; k <= S3; ++k) {
				++count[i + j + k];
			}
		}
	}

	for (int i = 3; i <= (S1 + S2 + S3); ++i) {
		if (count[i] > max_count) {
			max_i = i;
			max_count = count[i];
		}
	}

	cout << max_i;
}
