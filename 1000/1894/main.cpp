#include <iostream>
using namespace std;

class point {
public:
	double x, y;
	
	point() {
		x = 0;
		y = 0;
	}
};

bool same(point x, point y) {
	if (x.x == y.x && x.y == y.y)
		return true;
	
	return false;
}

int main() {
	double x, y;
	point line[2][2];
	point center;
	double resX = 0, resY = 0;

	while (cin >> line[0][0].x >> line[0][0].y >> line[0][1].x >> line[0][1].y >> line[1][0].x >> line[1][0].y >> line[1][1].x >> line[1][1].y) {
		resX = 0, resY = 0;

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 2; ++j) {
				if (same(line[0][i], line[1][j])) {
					center.x = line[0][i].x;
					center.y = line[0][i].y;
				}
			}
		}

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 2; ++j) {
				if (!same(line[i][j], center)) {
					resX += line[i][j].x;
					resY += line[i][j].y;
				}
			}
		}

		printf("%.3f %.3f\n", resX - center.x, resY - center.y);
	}
}
