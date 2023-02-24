#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int U, N, tmp;
	string tmpStr;
	cin >> U >> N;

	vector<string> str(U);
	vector<int> cnt(U);
	for (int i = 0; i < N; ++i) {
		cin >> tmpStr >> tmp;

		if (str[tmp - 1].empty())
			str[tmp - 1] = tmpStr;
		
		cnt[tmp - 1]++;
	}

	int mn = 10000, idx = 0;
	for (int i = 0; i <U; ++i) {
		if (mn > cnt[i] && !str[i].empty()) {
			mn = cnt[i];
			idx = i;
		}
	}

	cout << str[idx] << ' ' << idx + 1;
}
