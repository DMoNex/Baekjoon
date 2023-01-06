#include <iostream>
#include <string>
using namespace std;

int getMonth(string name) {
	if (name == "January") return 1;
	if (name == "February") return 2;
	if (name == "March") return 3;
	if (name == "April") return 4;
	if (name == "May") return 5;
	if (name == "June") return 6;
	if (name == "July") return 7;
	if (name == "August") return 8;
	if (name == "September") return 9;
	if (name == "October") return 10;
	if (name == "November") return 11;
	if (name == "December") return 12;
}

int getDay(int year) {
	if (year % 400 == 0) return 366;
	else if (year % 100 == 0) return 365;
	else if (year % 4 == 0) return 366;
	else return 365;
}

int getDayfromM(int month, bool s) {
	int result = 0;

	switch (month) {
	case 12: result += 30;
	case 11: result += 31;
	case 10: result += 30;
	case 9: result += 31;
	case 8: result += 31;
	case 7: result += 30;
	case 6: result += 31;
	case 5: result += 30;
	case 4: result += 31;
	case 3:
		if (s == true) result += 29;
		else result += 28;
	case 2: result += 31;
	case 1: return result;
	}
}

int main() {
	string tmp;
	int Month = 0, Day = 0, Year = 0, Hour = 0, Min = 0;
	double result;
	bool s;

	cin >> tmp;
	scanf(" %d, %d %d:%d", &Day, &Year, &Hour, &Min);

	Month = getMonth(tmp);
	if (getDay(Year) == 366) s = true;
	else s = false;

	result = (double)((getDayfromM(Month, s) * 24 * 60) + ((Day - 1) * 24 * 60) + (Hour * 60) + Min) / (getDay(Year) * 24 * 60) * 100;
	
	printf("%.9lf", result);
}
