#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N, M, min = -1, sum = 0;

	cin >> N >> M;
	for (int i = N; i <= M; ++i) {
		if (i == ((int)sqrt(i) * (int)sqrt(i))) {
			if (min == -1)
				min = i;
			
			sum += i;
		}
	}

	if (min == -1)
		cout << -1;
	else
		cout << sum << '\n' << min;
}
