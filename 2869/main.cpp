#include <iostream>

int main() {
	int A, B, V, result = 0;

	std::cin >> A >> B >> V;

	V -= A;
	result = V / (A - B);

	if ((V % (A - B)) != 0) ++result;

	std::cout << result + 1;
}
