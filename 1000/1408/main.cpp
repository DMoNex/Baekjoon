#include <iostream>
using namespace std;

int main() {
	int h, m, s, h2, m2, s2;
	int rh, rm, rs;

	scanf("%d:%d:%d", &h, &m, &s);
	scanf("%d:%d:%d", &h2, &m2, &s2);

	rh = h2 - h;
	if (rh < 0)
		rh += 24;
	rm = m2 - m;
	if (rm < 0) {
		rh--;
		rm += 60;
	}
	rs = s2 - s;
	if (rs < 0) {
		rm--;
		if(rm < 0) {
			rm += 60;
			rh--;
		}
		rs += 60;
	}
	printf("%02d:%02d:%02d", rh, rm, rs);
}
