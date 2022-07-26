#include <iostream>
using namespace std;

int main() {
	int a, b, result = 0;

	cin >> a >> b;

	if (a >= b)
		cout << "Congratulations, you are within the speed limit!";
	else {
		cout << "You are speeding and your fine is $";

		if (0 < b - a && b - a <= 20)	
			cout << "100.";
		else if (20 < b - a && b - a <= 30)
			cout << "270.";
		else if (30 < b - a)
			cout << "500.";
	}
}
