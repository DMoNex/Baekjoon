#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	int N, result = 0;
	char tmp;
	bool check[26] = { 0 }, flag = false;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> str;
		
		memset(check, false, sizeof(check));

		flag = false;
		tmp = 0;
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == tmp) continue;
			else if (check[str[i] - 'a'] != true) {
				tmp = str[i];
				check[str[i] - 'a'] = true;
			}
			else {
				flag = true;
				break;
			}
		}

		if (flag == false) ++result;
	}

	cout << result;
}
