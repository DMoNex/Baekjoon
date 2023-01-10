#include <iostream>
#include <math.h>
using namespace std;

void initEratos(bool* check, long long min, long long max) {
	long long root = 0;

	for (root = 2; root * root <= max; ++root)
		for (long long sq = root * root * (min / (root * root)); sq <= max; sq += (root * root))
			if (sq >= min)
				check[sq - min] = true;
}

int main() {
	bool check[1000001] = { 0 };
	long long min, max;
	int ret = 0;

	cin >> min >> max;
	initEratos(check, min, max);

	for (long long i = 0; i <= max - min; ++i)
		if (check[i] != true)
			ret++;

	cout << ret;
}
