#include <iostream>

int main() {
	int A[4], B[4];

	std::cin >> A[0] >> A[1] >> A[2] >> A[3] >> B[0] >> B[1] >> B[2] >> B[3];

	std::cout << std::max(A[0] + A[1] + A[2] + A[3], B[0] + B[1] + B[2] + B[3]);
}
