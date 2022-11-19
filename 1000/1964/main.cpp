#include <iostream>
using namespace std;

int main() {
	int N, cnt = 0;
	
	cin >> N;
	for (int i = 0; i <= N; ++i) {
		cnt += 3 * i + 1;
		cnt %= 45678;
	}

	cout << cnt;
}
