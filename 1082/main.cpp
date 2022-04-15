#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M, P[10], cheapCost = 50, cheapIdx = 0;
	int nonZCheapCost = 50, nonZCheapIdx = 0;
	string result;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> P[i];
		if (P[i] <= cheapCost) {
			cheapCost = P[i];
			cheapIdx = i;
		}
	}
	cin >> M;

	if (cheapIdx == 0) {
		for (int i = 1; i < N; ++i) {
			if (P[i] <= nonZCheapCost) {
				nonZCheapCost = P[i];
				nonZCheapIdx = i;
			}
		}

		if (nonZCheapCost > M) {
			cout << 0;
			return 0;
		}

		M -= nonZCheapCost;
		result.push_back(nonZCheapIdx + '0');
	}

	while (cheapCost <= M) {
		M -= cheapCost;
		result.push_back(cheapIdx + '0');
	}
	
	if (M > 0) {
		for (int i = 0; i < result.length(); ++i) {
			for (int j = N - 1; j >= 0; --j) {
				if (j == (result[i] - '0')) break;
				if (P[j] - P[result[i] - '0'] <= M) {
					M -= (P[j] - P[result[i] - '0']);
					result[i] = j + '0';
					break;
				}
			}
		}
	}

	cout << result;
}
