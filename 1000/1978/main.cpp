#include <iostream>
using namespace std;

int main() {
	int N, tmp, count = 0;
	cin >> N;

	while (N--) {
		cin >> tmp;
		
		int i = 2;
		for (true; i < tmp; ++i) {
			if (tmp % i == 0) break;
		}

		if (i == tmp) ++count;
	}

	cout << count;
}
