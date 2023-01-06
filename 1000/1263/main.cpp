#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, result = -1, T, S;
	vector<pair<int, int>> arr;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> T >> S;

		if (T > S) {
			cout << result;
			return 0;
		}
		
		arr.push_back(pair<int, int>(S, T));
	}

	sort(arr.begin(), arr.end(), greater<pair<int, int>>());
	result = arr.front().first;
	
	for (int i = 0; i < N; ++i) {
		result -= arr.front().second;
		arr.erase(arr.begin());

		if(!arr.empty()) result = min(result, arr.front().first);
	}

	cout << result;
}
