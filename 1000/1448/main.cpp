#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, tmp, result = -1;
	vector<int> straw;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		straw.push_back(tmp);
	}

	sort(straw.begin(), straw.end(), greater<int>());

	for (int i = 0; i < straw.size() - 2; ++i) {
		if (straw.at(i + 1) + straw.at(i + 2) > straw.at(i)) {
			tmp = straw.at(i) + straw.at(i + 1) + straw.at(i + 2);
			result = max(result, tmp);
		}
	}

	cout << result;
}
