#include <iostream>
using namespace std;

int main() {
	int N, L, W, H;
	long long num;
	double lo = 0, hi = 1000000000, mid;
	cin >> N >> L >> W >> H;

	// while (hi - lo > eps)와 같이 할 경우 IEEE754 한계인지 무한루프 발생
	for (int i = 0; i < 10000; ++i) {
		mid = (lo + hi) / 2;
		num = (long long)(L / mid) * (long long)(W / mid) * (long long)(H / mid);
		
		if (num < N)
			hi = mid;
		else
			lo = mid;
	}

	printf("%.10lf", lo);
}
