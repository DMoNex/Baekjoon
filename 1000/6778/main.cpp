#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	if (a > 2 && b < 5) cout << "TroyMartian\n";
	if (a < 7 && b > 1) cout << "VladSaturnian\n";
	if (a < 3 && b < 4) cout << "GraemeMercurian\n";
}
