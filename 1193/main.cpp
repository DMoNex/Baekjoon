#include <iostream>
using namespace std;

int main() {
	int X, i;

	cin >> X;

	for (i = 1; X > i; ++i) {
		X -= i; 
	}

	if (i % 2) {
		cout << (i + 1) - X << '/' << X;
	}
	else {
		cout << X << '/' << (i + 1) - X;
	}
}
