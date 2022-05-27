#include <iostream>
using namespace std;

void swap(int* A, int* B) {
	int tmp = *A;
	(*A) = (*B);
	(*B) = tmp;
}

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	if (A > B) swap(A, B);
	if (A > C) swap(A, C);
	if (B > C) swap(B, C);

	cout << A << ' ' << B << ' ' << C;
}
