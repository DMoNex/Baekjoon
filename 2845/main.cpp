#include <iostream>
using namespace std;

int main() {
	int L, P;
	int numOfGuest;
	int a, b, c, d, e;

	cin >> L >> P;
	cin >> a >> b >> c >> d >> e;

	numOfGuest = L * P;

	cout << a - numOfGuest << ' ';
	cout << b - numOfGuest << ' ';
	cout << c - numOfGuest << ' ';
	cout << d - numOfGuest << ' ';
	cout << e - numOfGuest << endl;
}
