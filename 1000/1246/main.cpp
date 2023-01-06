#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, tmp, result[2] = { 0 }, count = 0, cost;
	vector<int> arr;

	cin >> N >> M;
	
	for (int i = 0; i < M; ++i) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	for (int i = arr.size(); i > 0; --i) {
		cost = arr.at(i - 1);
		++count;
		if (count > N) break;
		if (result[1] < cost * count) {
			result[1] = cost * count;
			result[0] = cost;
		}
	}

	cout << result[0] << ' ' << result[1];
}
