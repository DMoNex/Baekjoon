#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctime>

int main() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	
	printf("%4d-%02d-%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
}
