#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<string> arr[51];
	string tmp;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		arr[tmp.length()].push_back(tmp);
	}

	for (int i = 0; i <= 50; ++i) {
		sort(arr[i].begin(), arr[i].end());
		arr[i].erase(unique(arr[i].begin(), arr[i].end()), arr[i].end());
	}

	for (int i = 0; i <= 50; ++i) {
		for(int j = 0; j < arr[i].size(); ++j) {
			cout << arr[i].at(j) << endl;
		}
	}
}
