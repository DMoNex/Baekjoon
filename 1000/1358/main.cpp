#include <iostream>
using namespace std;

int main() {
	int W, H, X, Y, P;
	int curX, curY, cnt = 0;

	cin >> W >> H >> X >> Y >> P;
	while (P--) {
		cin >> curX >> curY;

		if (curX >= X && curX <= X + W) {
			if (curY >= Y && curY <= Y + H) cnt++;
		}
		else if (curX < X) {
			if ((X - curX) * (X - curX) + (Y + H / 2 - curY) * (Y + H / 2 - curY) <= (H / 2) * (H / 2)) cnt++;
		}
		else {
			if ((X + W - curX) * (X + W - curX) + (Y + H / 2 - curY) * (Y + H / 2 - curY) <= (H / 2) * (H / 2)) cnt++;
		}
	}
	cout << cnt;
}
