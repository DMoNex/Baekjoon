#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, maxIndex, cnt = 0;
	float maxVal;

	cin >> A >> B >> C >> D;

	maxVal = (float)A / C + (float)B / D;
	maxIndex = cnt++;

	if (maxVal < ((float)C / D + (float)A / B)) {
		maxVal = (float)C / D + (float)A / B;
		maxIndex = cnt;
	}
	cnt++;
	if (maxVal < ((float)D / B + (float)C / A)) {
		maxVal = (float)D / B + (float)C / A;
		maxIndex = cnt;
	}
	cnt++;
	if (maxVal < ((float)B / A + (float)D / C)) {
		maxVal = (float)B / A + (float)D / C;
		maxIndex = cnt;
	}

	cout << maxIndex;
}
