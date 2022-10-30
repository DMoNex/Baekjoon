#include <iostream>
using namespace std;

int main() {
	int tok, N = 1;
	float dia, time;

	while (true) {
		cin >> dia >> tok >> time;
		
		dia *= 3.1415927;

		if (tok == 0) break;
		
		printf("Trip #%d: %.2f %.2f\n", N++, dia * tok / 63360, dia * tok / 63360 * 3600 / time);
	}
}
