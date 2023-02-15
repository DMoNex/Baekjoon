#include <iostream>
using namespace std;

int main() {
	int sum, k;
	cin >> sum >> k;
	
	if (sum * 1000 >= 7000 * k)
		cout << 7000 * k;
	else if (sum * 1000 >= 3500 * k)
		cout << 3500 * k;
	else if (sum * 1000 >= 1750 * k)
		cout << 1750 * k;
	else
		cout << 0;
}
