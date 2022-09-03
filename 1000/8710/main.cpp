#include <iostream>
using namespace std;

int main() {
	long long k, w, m, result;
	cin >> k >> w >> m;
	
	if (k < w) {
		result = (w - k) / m;
		if ((w - k) % m != 0)
			result++;
		cout << result;
	}
}
