#include <iostream>
using namespace std;

int main() {
	int x1, x2, x3, y1, y2, y3;
	int len1, len2, len3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	

	if ((y2 - y1) * (y2 - y1) * (x3 - x2) * (x3 - x2) == (y3 - y2) * (y3 - y2) * (x2 - x1) * (x2 - x1)) {
		cout << 'X';
	}
	else {
		len1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		len2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
		len3 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);

		if (len1 < len2) swap(len1, len2);
		if (len1 < len3) swap(len1, len3);
		if (len2 < len3) swap(len2, len3);

		if (len1 == len2 && len2 == len3)
			cout << "JungTriangle";
		else if (len1 == len2)
			cout << "Yeahkak2Triangle";
		else if (len2 == len3) {
			if (len2 * 2 < len1)
				cout << "Dunkak2Triangle";
			else if (len2 * 2 == len1)
				cout << "Jikkak2Triangle";
			else if (len2 * 2 > len1)
				cout << "Yeahkak2Triangle";
		}
		else {
			if (len1 > len2 + len3)
				cout << "DunkakTriangle";
			else if (len1 == len2 + len3)
				cout << "JikkakTriangle";
			else if (len1 < len2 + len3)
				cout << "YeahkakTriangle";
		}
	}
}
