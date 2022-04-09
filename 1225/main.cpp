#include <iostream>
#include <string>
using namespace std;

int main() {
	long long result = 0;
	string A, B;

	cin >> A >> B;

	for (int i = 0; i < B.length(); ++i) {
		for (int j = 0; j < A.length(); ++j) {
			result += (A[j] - '0') * (B[i] - '0');
		}
	}

	cout << result;
}
