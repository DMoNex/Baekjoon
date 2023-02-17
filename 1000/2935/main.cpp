#include <iostream>
#include <string>
using namespace std;

int main() {
	char sig;
	string a, b;

	cin >> a >> sig >> b;

	if (sig == '*')
		cout << a << b.substr(1);
	else if (sig == '+') {
		if (a.size() > b.size())
			cout << a.substr(0, a.size() - b.size()) << b;
		else if (a.size() < b.size())
			cout << b.substr(0, b.size() - a.size()) << a;
		else
			cout << 2 << a.substr(1);
	}
}
