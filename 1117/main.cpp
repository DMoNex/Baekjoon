#include <iostream>
using namespace std;

int main() {
	long long W, H, f, c, x1, x2, y1, y2, result = 0;

	cin >> W >> H >> f >> c >> x1 >> y1 >> x2 >> y2;

	if (f > W / 2) f = W - f;

	long long painted = (x2 - x1) * (y2 - y1) * (c + 1);

	if (f <= x1) cout << W * H - painted;
	else cout << W * H - painted - ((min(f, x2) - x1) * (y2 - y1) * (c + 1));
}
