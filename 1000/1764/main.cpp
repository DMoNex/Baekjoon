#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int N, M;
	set<string> arr;
	set<string> result;
	string tmp;

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		arr.insert(tmp);
	}

	for (int i = 0; i < M; ++i) {
		cin >> tmp;
		if (arr.find(tmp) != arr.end()) {
			result.insert(tmp);
		}
	}

	cout << result.size() << '\n';
	set<string>::iterator iter;
	for (iter = result.begin(); iter != result.end(); ++iter) {
		cout << *iter << '\n';
	}
}
