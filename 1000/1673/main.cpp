#include <iostream>
using namespace std;

int main() {
	int N, K, result = 0, tmp;

	while (true) {
		cin >> N >> K;
		if (cin.eof() == true) break;
		
		result = 0;

		while (N / K > 0) {
			tmp = N / K;
			result += tmp * K;
			N -= tmp * K;
			N += tmp;
		}
		cout << result + N << '\n';
	}
}
