#include <iostream>
#include <string>
using namespace std;

int main() {
	string input = { 0 };
	int N, mul;
	float sumS = 0, sumM = 0;

	cin >> N;
	while (N--) {
		cin >> input >> mul >> input;
		
		if (input == "A+")
			sumS += (mul * 4.3);
		else if (input == "A0")
			sumS += (mul * 4);
		else if (input == "A-")
			sumS += (mul * 3.7);
		else if (input == "B+")
			sumS += (mul * 3.3);
		else if (input == "B0")
			sumS += (mul * 3);
		else if (input == "B-")
			sumS += (mul * 2.7);
		else if (input == "C+")
			sumS += (mul * 2.3);
		else if (input == "C0")
			sumS += (mul * 2);
		else if (input == "C-")
			sumS += (mul * 1.7);
		else if (input == "D+")
			sumS += (mul * 1.3);
		else if (input == "D0")
			sumS += (mul * 1);
		else if (input == "D-")
			sumS += (mul * 0.7);

		sumM += mul;
	}

	printf("%.2lf", (sumS / sumM));
}
