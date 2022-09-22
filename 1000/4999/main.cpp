#include <iostream>
#include <string>
using namespace std;

int main() {
	string maximum, input;

	cin >> maximum >> input;

	if (maximum.size() >= input.size())
		cout << "go";
	else
		cout << "no";
}
