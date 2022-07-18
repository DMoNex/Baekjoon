#include <stdio.h>

int main()
{
	double a = 0, b = 0, result = 0;
	
	scanf("%lf %lf", &a, &b);

	result = a / b;

	printf("%.12lf", result);

	return 0;
}
