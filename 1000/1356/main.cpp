#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;
	int tmp1 = 1, tmp2 = 1;
	bool flag = false;

	cin >> num;

	for (int i = 0; i < num.length() - 1; ++i) {
		tmp1 = 1;
		tmp2 = 1;

		for (int j = 0; j <= i; ++j) {
			tmp1 *= (num[j] - '0');
		}
		for (int k = i + 1; k < num.length(); ++k) {
			tmp2 *= (num[k] - '0');
		}

		if (tmp1 == tmp2) {
			flag = true;
			break;
		}
	}

	if (flag == true) cout << "YES";
	else cout << "NO";
}
