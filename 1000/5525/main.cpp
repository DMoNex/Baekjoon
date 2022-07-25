#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, result = 0, count = 0;
	string input;
	
	cin >> N >> M >> input;

	for (int i = 0; i < M - 2; ++i) {
		if (input[i] == 'I' && input[i + 1] == 'O' && input[i + 2] == 'I') {
			++count;
			++i;

			if (count == N) {
				++result;
				--count;
			}
		}
		else
			count = 0;
	}
	cout << result;
}
