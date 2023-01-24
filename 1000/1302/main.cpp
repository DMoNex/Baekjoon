#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, int> soldData;

	int N, bookNum = 0;
	string bookName;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> bookName;

		if (soldData.count(bookName)) {
			soldData[bookName]++;
		}
		else {
			soldData.insert({ bookName, 1 });
		}
	}

	map<string, int>::iterator iter;
	for (iter = soldData.begin(); iter != soldData.end(); ++iter) {
		if ((*iter).second > bookNum) {
			bookNum = (*iter).second;
			bookName = (*iter).first;
		}
	}

	cout << bookName;
}
