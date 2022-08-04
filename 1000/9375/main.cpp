#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int T, N;
	string name;

	cin >> T;
	while (T--) {
		int result = 1;

		cin >> N;
		map<string, int> dress;

		while (N--) {
			cin >> name >> name;
			
			if (dress.find(name) != dress.end())
				dress[name]++;
			else 
				dress.insert(make_pair(name, 1));
		}

		map<string, int>::iterator iter;
		for (iter = dress.begin(); iter != dress.end(); ++iter) {
			result *= ((iter->second) + 1);
		}

		cout << result - 1 << '\n';
	}
}
