#include <iostream>
using namespace std;

int main() {
	int A, B, C;

	do {
		cin >> A >> B >> C;
		
		A *= A;
		B *= B;
		C *= C;

		if (A != 0 && B != 0 && C != 0) {
			if (A == (B + C) || B == (A + C) || C == (A + B))
				cout << "right" << endl;
			else
				cout << "wrong" << endl;
		}
	} while (A != 0 && B != 0 && C != 0);
}
