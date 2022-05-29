#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, tmp, result = 0;
	vector<int> card;

	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		card.push_back(tmp);
	}
	tmp = 0;

	sort(card.begin(), card.end(), greater<>());

	for (int i = 0; i < card.size() - 2; ++i) {
		for (int j = 1; j < card.size() - 1; ++j) {
			for (int k = 2; k < card.size(); ++k) {
				if (i == j) continue;
				if (i == k) continue;
				if (j == k) continue;

				tmp = card[i] + card[j] + card[k];
				
				if (tmp <= M) {
					result = max(result, tmp);
				}
			}
		}
	}

	cout << result;
}
