#include <iostream>
using namespace std;

int main() {
	int A, B, tmp;

	cin >> A >> B;

	A = ((A % 10) * 100) + ((A % 100) - (A % 10)) + (A / 100);
	B = ((B % 10) * 100) + ((B % 100) - (B % 10)) + (B / 100);

	cout << max(A, B);
}
