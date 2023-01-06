#include <iostream>

int main() {
	int A, B, N, result = 0;

	std::cin >> A >> B >> N;

	A %= B;
	while (--N) {
		A *= 10;
		A %= B;
	}

	std::cout << A * 10 / B;
}
