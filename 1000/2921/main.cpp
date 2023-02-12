#include <iostream>
using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;

	for (int i = 0; i <= N; ++i)
		for (int j = i; j <= N; ++j)
			sum += i + j;

	cout << sum;
}
