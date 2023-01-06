#include <iostream>
using namespace std;

int main() {
	float input;

	while (true) {
		cin >> input;
		
		if (input < 0)
			break;
		else
			printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", input, input * 0.167);
	}
}
