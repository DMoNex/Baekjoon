#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int N, i, cnt = 0;

	cin >> N >> input;
	
	i = 0;
	while (i < N) {
		if (input[i] == 'S') {
			cnt++;
			i++;
		}
		else {
			cnt++;
			i += 2;
		}
	}

	cnt + 1 < N ? cout << cnt + 1 : cout << N;
}
