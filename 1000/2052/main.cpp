#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double result = 1.0;
	int N;

	cin >> N;
	result = pow(0.5, N);
	
	printf("%.*f", N, result);
}
