#include <iostream>
#include <string>
using namespace std;

int can_read(string* arr, int N, int K, bool* learned, int cur) {
	int result = 0;

	if (K < 1) {
		bool flag = true;
		for (int i = 0; i < N; ++i) {
			flag = true;

			for (int j = 0; j < arr[i].length(); ++j) {
				if (learned[arr[i][j] - 'a'] != true) {
					flag = false;
					break;
				}
			}

			if (flag == true) {
				++result;
			}
		}
	}
	else {
		for (int i = cur + 1; i < 26; ++i) {
			if (learned[i] == true) continue;
			else {
				learned[i] = true;
				result = max(result,  can_read(arr, N, K - 1, learned, i));
				learned[i] = false;
			}
		}
	}
	return result;
}

int main() {
	string arr[50];
	int N, K;
	bool learned[26] = { false };

	cin >> N >> K;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
		arr[i].erase(0, 4);
		arr[i].erase(arr[i].length() - 4, arr[i].length());
	}

	if (K < 5) {
		cout << 0;
		return 0;
	}
	
	K -= 5;
	learned[0] = true;
	learned['n' - 'a'] = true;
	learned['t' - 'a'] = true;
	learned['i' - 'a'] = true;
	learned['c' - 'a'] = true;

	cout << can_read(arr, N, K, learned, 0);
}
