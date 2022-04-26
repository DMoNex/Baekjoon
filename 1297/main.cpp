#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int D, H, W;
	double ratio;
	int result_H = 0, result_W = 0;

	cin >> D >> H >> W;

	ratio = (double)(D * D) / (H * H + W * W);
	ratio = sqrt(ratio);

	result_H = floor(ratio * H);
	result_W = floor(ratio * W);
	
	cout << result_H << ' ' << result_W;
}
