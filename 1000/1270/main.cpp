#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, T_i;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		vector<long long> T;
		vector<long long>::iterator iter;
		long long tmp = -1;
		int count = 0;
		long long result = -1;

		cin >> T_i;
		
		for (int j = 0; j < T_i; ++j) {
			long long tmp;

			cin >> tmp;

			T.push_back(tmp);
		}

		sort(T.begin(), T.end());

		for (iter = T.begin(); iter != T.end(); ++iter) {
			if (tmp == *iter) {
				++count;
				if (count > (T.size() / 2)) {
					result = tmp;
					break;
				}
			}
			else {
				count = 1;
				tmp = *iter;
			}
		}

		if (result != -1) {
			cout << result << '\n';
		}
		else {
			cout << "SYJKGW\n";
		}
	}
}
