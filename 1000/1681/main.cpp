#include <iostream>
using namespace std;

bool check(int A, int L) {
	int i = 1;
	while (i <= A) {
		if ((A / i) % 10 == L)
			return false;

		i *= 10;
	}
	return true;
}

int main() {
	int N, L, cnt = 0, num  = 1;

	cin >> N >> L;
	
	while (cnt < N) {
		if (check(num, L))
			cnt++;
		
		num++;
	}

	cout << num - 1;
}
