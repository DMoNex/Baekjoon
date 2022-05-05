#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string A, B, result;
	int tmp = 0;

	cin >> A >> B;

	for (int j = A.length() - 1; j > 0; --j) {
		if (A[j] == '0') {
			if (j == 1) A.erase(j, A.length());
			continue;
		}
		else {
			A.erase(j + 1, A.length());
			break;
		}
	}

	for (int j = B.length() - 1; j > 0; --j) {
		if (B[j] == '0') {
			if (j == 1) B.erase(j, B.length());
			continue;
		}
		else {
			B.erase(j + 1, B.length());
			break;
		}
	}

	int i = 0;
	while (i < A.length() && i < B.length()) {
		result += ((A[i] + B[i] - 96 + tmp) % 10 + '0');

		tmp = (A[i] + B[i] - 96 + tmp) / 10;

		++i;
	}

	while (i < A.length()) {
		result += ((A[i] - '0' + tmp) % 10 + '0');

		tmp = (A[i] - '0' + tmp) / 10;

		++i;
	}

	while (i < B.length()) {
		result += ((B[i] - '0' + tmp) % 10 + '0');

		tmp = (B[i] - '0' + tmp) / 10;

		++i;
	}

	if (tmp != 0) {
		result += tmp + '0';
	}

	for (int j = 0; j < result.length(); ++j) {
		if (result[j] == '0') {
			if (j == result.length() - 1) result.erase(0, j);
			continue;
		}
		else {
			result.erase(0, j);
			break;
		}
	}

	cout << result;
}
