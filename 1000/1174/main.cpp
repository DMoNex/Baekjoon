#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeNum(vector<long long>* arr, int len, long long cur, int* cnt) {
	if (len == 1) {
		for (int i = (cur % 10) - 1; i >= 0; --i) {
			(*arr).push_back(cur * 10 + i);
		}
	}
	else {
		for (int i = (cur % 10) - 1; i >= 0; --i) {
			if (cur % 10 < len)
				break;
			else
				makeNum(arr, len - 1, cur * 10 + i, cnt);
		}
	}
}

int main() {
	vector<long long> arr;
	int N, len = 1, cnt = 0;
	cin >> N;

	if (N <= 10) {
		cout << N - 1;
		return 0;
	}
	
	if (N > 1023) {
		cout << -1;
		return 0;
	}
	
	for (int len = 1; len <= 9; ++len) {
		for (int i = 10; i >= 0; --i) {
			makeNum(&arr, len, i, &cnt);
		}
	}

	sort(arr.begin(), arr.end());;
	
	cout << arr[N - 11];
}
