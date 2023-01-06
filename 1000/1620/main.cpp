#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	unordered_map<string, int> arr;
	string nameSet[100000];
	string quest;

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> nameSet[i];
		arr.insert(make_pair(nameSet[i], i + 1));
	}
	
	while (M--) {
		cin >> quest;
		if (quest[0] >= '0' && quest[0] <= '9') {
			cout << nameSet[stoi(quest) - 1] << '\n';
		}
		else {
			cout << arr.find(quest)->second << '\n';
		}
	}
}
