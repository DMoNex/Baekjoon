#include <iostream>
using namespace std;

int main() {
	int K, N, M, result;

	cin >> K >> N >> M;
	
	result = K * N - M;
	if (result > 0) cout << result;
	else cout << 0;
}
