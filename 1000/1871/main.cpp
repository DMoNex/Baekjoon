#include <iostream>
#include <string>
using namespace std;

int getDiff(int A, int B) {
	return A > B ?  A - B : B - A;
}

int main() {
	string input;
	int N, A, B;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> input;

		A = (input[0] - 'A') * 26 * 26 + (input[1] - 'A') * 26 + (input[2] - 'A');
		B = (input[4] - '0') * 1000 + (input[5] - '0') * 100 + (input[6] - '0') * 10 + (input[7] - '0');

		getDiff(A, B) > 100 ? cout << "not nice\n" : cout << "nice\n";
	}
}
