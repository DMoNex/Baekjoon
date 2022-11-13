#include <iostream>
using namespace std;

int main() {
	int N, A, B, C, D;
	cin >> N >> A >> B >> C;
	N -= 3;
	D = C;
	while (N--) {
		cin >> D;
	}
	
	if (B + (B - A) == C) {
		cout << D + (B - A);
	}

	if (B * (B / A) == C) {
		cout << D * (B / A);
	}
}
