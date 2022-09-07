#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string room[100];
	int count = 0, p = 0, resultR = 0, resultC = 0;

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> room[i];

	for (int i = 0; i < N; ++i) {
		p = 0;
		while (p < N) {
			count = 0;
			while (p < N && room[i][p] == '.') {
				p++;
				count++;
			}
			if (count > 1) {
				resultR++;
				count = 0;
			}
			while (p < N && room[i][p] == 'X')
				p++;
			if (p == N && count > 1)
				resultR++;
		}
	}

	for (int i = 0; i < N; ++i) {
		p = 0;
		while (p < N) {
			count = 0;
			while (p < N && room[p][i] == '.') {
				p++;
				count++;
			}
			if (count > 1) {
				resultC++;
				count = 0;
			}
			while (p < N && room[p][i] == 'X')
				p++;
			if (p == N && count > 1)
				resultC++;
		}
	}

	cout << resultR << ' ' << resultC;
}
