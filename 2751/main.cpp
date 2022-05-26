#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	vector<int> arr;

	cin >> N;
	while (N--) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << '\n';
	}
}
