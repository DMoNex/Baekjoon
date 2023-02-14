#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	while (A <= B) {
		cout << "All positions change in year " << A << '\n';
		A += 60;
	}
}
