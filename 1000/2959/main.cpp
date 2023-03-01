#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input[4] = { 0 };
	for (int i = 0; i < 4; ++i)
		cin >> input[i];

	sort(input, input + 4);
	
	cout << min(input[0], input[1]) * min(input[2], input[3]);
}
