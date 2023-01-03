#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int craneNum, boxNum, result = 0;
	int maxCranePower = 0;

	cin >> craneNum;
	vector<int> cranePower(craneNum);
	for (int i = 0; i < craneNum; ++i) {
		cin >> cranePower[i];
		maxCranePower < cranePower[i] ? maxCranePower = cranePower[i] : false;
	}

	cin >> boxNum;
	vector<int> boxWeight(boxNum);
	for (int i = 0; i < boxNum; ++i)
		cin >> boxWeight[i];

	sort(boxWeight.begin(), boxWeight.end(), greater<>());
	sort(cranePower.begin(), cranePower.end(), greater<>());
	
	if (boxWeight.front() > maxCranePower) {
		cout << -1;
		return 0;
	}
	
	vector<int>::iterator iter = boxWeight.begin();
	while (!boxWeight.empty()) {
		iter = boxWeight.begin();

		for (int i = 0; i < craneNum; ++i) {
			while (*iter > cranePower[i]) {
				iter++;
				
				if (iter == boxWeight.end())
					break;
			}

			if (iter != boxWeight.end()) {
				iter = boxWeight.erase(iter);

				if (iter == boxWeight.end())
					iter = boxWeight.begin();
			}
			else
				iter = boxWeight.begin();

			if (boxWeight.empty())
				break;
		}
		
		result++;
	}

	cout << result;
}
