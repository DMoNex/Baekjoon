#include <iostream>
using namespace std;

int main() {
	int burger1, burger2, burger3, coke, cider;

	cin >> burger1 >> burger2 >> burger3 >> coke >> cider;

	cout << min(burger1, min(burger2, burger3)) + min(coke, cider) - 50;
}
