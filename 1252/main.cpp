#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string A, B;
	string result;
	int i = 0;
	char tmp = '0';

	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	while (i < A.length() && i < B.length()) {
		tmp = A[i] + B[i] - '0' + tmp - '0';
		
		if (tmp < '2') {
			result += tmp;
			tmp = '0';
		}
		else {
			if (tmp == '2') result += '0';
			else if (tmp == '3') result += '1';
			tmp = '1';
		}

		++i;
	}

	while (i < A.length()) {
		tmp = A[i] + tmp - '0';

		if (tmp < '2') {
			result += tmp;
			tmp = '0';
		}
		else {
			if (tmp == '2') result += '0';
			tmp = '1';
		}
		++i;
	}

	while (i < B.length()) {
		tmp = B[i] + tmp - '0';

		if (tmp < '2') {
			result += tmp;
			tmp = '0';
		}
		else {
			if (tmp == '2') result += '0';
			tmp = '1';
		}
		++i;
	}

	if (tmp != '0') result += tmp;

	reverse(result.begin(), result.end());

	if (result.find('1') != string::npos) {
		result.erase(0, result.find('1'));
		cout << result;
	}
	else cout << 0;
}
