#include <iostream>
using namespace std;

int gcd(int A, int B) {
	int tmp;

	while (B != 0) {
		tmp = A % B;
		A = B;
		B = tmp;
	}

	return A;
}

int lcm(int A, int B) {
	return A * (B / gcd(A, B));
}

int main() {
	int A, B;

	cin >> A >> B;

	cout << gcd(A, B) << '\n' << lcm(A, B);
}
