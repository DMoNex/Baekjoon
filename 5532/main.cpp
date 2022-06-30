#include <iostream>
using namespace std;

int main() {
	int L, A, B, C, D, result = 0;
	int cost = 0;

	cin >> L >> A >> B >> C >> D;

	cost = max((A - 1) / C, (B - 1) / D);
	++cost;
	result = L - cost;

	cout << result;
}
