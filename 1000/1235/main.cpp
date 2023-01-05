#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, size;
	bool flag = false;

	cin >> N;
	vector<string> input(N);
	for (int i = 0; i < N; ++i)
		cin >> input[i];

	sort(input.begin(), input.end());

	size = input[0].size();
	for (int i = size - 1; i >= 0; --i) {
		flag = false;
		for (int j = 0; j < N - 1; ++j) {
			for (int k = j + 1; k < N; ++k) {
				if (input[j].substr(i) == input[k].substr(i)) {
					flag = true;
					break;
				}
			}
			if (flag)
				break;
		}

		if (!flag) {
			cout << size - i;
			return 0;
		}
	}
}
