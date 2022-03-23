#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	int arr[26] = { 0 };
	string tmp;
	string result;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		++arr[(int)tmp[0] - 97];
	}

	for (int i = 0; i < 26; ++i) {
		if (arr[i] >= 5) {
			result.push_back((char)i + 97);
		}
	}

	if (result.empty()) {
		cout << "PREDAJA";
	}
	else {
		cout << result;
	}
}
