#include <iostream>
using namespace std;

int main() {
	int N, maxV = 0;
	cin >> N;
	for (int i = 1; i <= 101; ++i) {
		if (i * i <= N)
			maxV = i;
		else {
			cout << "The largest square has side length " << maxV << '.';
			return 0;
		}
	}
}
