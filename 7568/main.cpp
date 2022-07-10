#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int N, rank[50] = { 0 };
	cin >> N;

	vector<pair<int, int>> person(N);
	for (int i = 0; i < N; ++i)
		cin >> person[i].first >> person[i].second;
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (person[j].first > person[i].first && person[j].second > person[i].second)
				++rank[i];
		}

		cout << rank[i] + 1 << ' ';
	}
}
