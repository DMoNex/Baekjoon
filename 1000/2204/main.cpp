#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool sorter(string a, string b) {
	string cmpA = a, cmpB = b;
	
	for (int i = 0; i < cmpA.size(); ++i) {
		if (cmpA[i] >= 'A' && cmpA[i] <= 'Z')
			cmpA[i] = (cmpA[i] - 'A' + 'a');
		if (cmpB[i] >= 'A' && cmpB[i] <= 'Z')
			cmpB[i] = (cmpB[i] - 'A' + 'a');
	}

	return cmpA < cmpB;
}

int main() {
	int N;
	string input;
	vector<string> arr;
	
	while (true) {
		cin >> N;

		if (N == 0) break;
		else {
			arr.clear();

			for (int i = 0; i < N; ++i) {
				cin >> input;
				arr.push_back(input);
			}

			sort(arr.begin(), arr.end(), sorter);

			cout << arr.front() << '\n';
		}
	}
}
