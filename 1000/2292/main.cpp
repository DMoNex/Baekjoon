#include <iostream>
using namespace std;

int main() {
	int N, result, tmp;

	cin >> N;
	
	tmp = 1;
	for (result = 1; tmp < N; ++result) {
		tmp += (6 * result);
	}

	cout << result;
}
