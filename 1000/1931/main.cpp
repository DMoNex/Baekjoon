#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, result = 0;
	
	cin >> N;
	vector<pair<unsigned int, unsigned int>> time(N);

	for (int i = 0; i < N; ++i)
		cin >> time[i].second >> time[i].first;

	sort(time.begin(), time.end());

	unsigned int curTime = 0;
	vector<pair<unsigned int, unsigned int>>::iterator iter;

	for (iter = time.begin(); iter != time.end(); ++iter) {
		if (iter->first < curTime || iter->second < curTime) continue;
		
		++result;
		curTime = iter->first;
	}

	cout << result;
}
