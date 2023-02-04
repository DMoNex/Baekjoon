#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkNum(int num, int people) {
	bool flag = false;

	int lo = 0;
	int hi = people * 10;
	
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		int avg = (mid * 1000) / people;

		if (avg == num) {
			flag = true;
			break;
		}
		else if (avg > num)
			hi = mid - 1;
		else
			lo = mid + 1;
	}

	return flag;
}

int main() {
	bool flag = true;
	int N;
	string input;
	vector<int> arr;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> input;
		for (int j = 0; j < input.size(); ++j) {
			if (input[j] == '.') {
				input.erase(j, 1);
				arr.push_back(stoi(input));
				//arr.push_back(stoi(input.substr(j + 1, 3)));
				break;
			}

		}
	}

	for (int people = 1; people <= 1000; ++people) {
		flag = true;

		for (int i = 0; i < arr.size(); ++i) {
			if (checkNum(arr[i], people) == false) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << people;
			return 0;
		}
	}
}
