#include <iostream>
using namespace std;

int main() {
	int A, B, C, result = 0;

	scanf("%d:%d:%d", &A, &B, &C);
	
	if (A > 59 || B > 59 || C > 59) {
		cout << 0;
		return 0;
	}

	if (A > 0 && A < 13) result++;
	if (B > 0 && B < 13) result++;
	if (C > 0 && C < 13) result++;

	cout << result * 2;
}
