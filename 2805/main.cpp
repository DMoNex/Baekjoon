#include <iostream>
#include <vector>
using namespace std;

unsigned long long getLen(vector<unsigned long long> &a, unsigned long long len) {
	unsigned long long result = 0;

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] > len) result += (a[i] - len);
	}

	return result;
}

int main() {
	unsigned long long maxLen = 0, minLen = 0, midLen, M, result = 0, tmp;
	int N;

	cin >> N >> M;
	vector<unsigned long long> tree(N);

	for (int i = 0; i < N; ++i) {
		cin >> tree[i];
		if (maxLen < tree[i]) maxLen = tree[i];
	}

	while (minLen <= maxLen) {
		midLen = (minLen + maxLen) / 2;
		tmp = getLen(tree, midLen);

		if (tmp < M) maxLen = midLen - 1;
		else {
			result = max(midLen, result);
			minLen = midLen + 1;
		}
	}

	cout << result;
}
