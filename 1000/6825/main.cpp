#include <iostream>
using namespace std;

int main() {
	double w, h, res;
	cin >> w >> h;
	res = w / h / h;
	
	if (res > 25) cout << "Overweight";
	else if (res > 18.5) cout << "Normal weight";
	else cout << "Underweight";
}
