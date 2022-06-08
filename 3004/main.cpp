#include <iostream>

int main() {
	int N, result = 0, r, c;

	std::cin >> N;

	r = c = N / 2;
	
	if (r * 2 != N) ++r;
	
	++r; ++c;

	std::cout << r * c;
}
