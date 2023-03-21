#include <iostream>
using namespace std;

int main() {
	int arrX[3] = { 0 };
	int arrY[3] = { 0 };
	int X, Y;

	for (int i = 0; i < 3; ++i)
		cin >> arrX[i] >> arrY[i];

	if (arrX[0] == arrX[1]) X = arrX[2];
	if (arrX[1] == arrX[2]) X = arrX[0];
	if (arrX[0] == arrX[2]) X = arrX[1];
	if (arrY[0] == arrY[1]) Y = arrY[2];
	if (arrY[1] == arrY[2]) Y = arrY[0];
	if (arrY[0] == arrY[2]) Y = arrY[1];

	cout << X << ' ' << Y;
}
