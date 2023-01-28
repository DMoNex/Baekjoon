#include <iostream>
using namespace std;

int main() {
	long long A, B;

	cin >> A >> B;

	if (B >= A)
		cout << (A + B) * (B - A + 1) / 2;
	else
		cout << (A + B) * (A - B + 1) / 2;
}
