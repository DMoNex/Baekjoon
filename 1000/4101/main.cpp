#include <iostream>
using namespace std;

int main() {
	int a, b;
	do {
		cin >> a >> b;
		if(a != 0 && b != 0)
			a > b ? cout << "Yes\n" : cout << "No\n";
	} while (a != 0 || b != 0);
}
