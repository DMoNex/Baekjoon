#include <iostream>

int main() {
	int score[5];
	std::cin >> score[0] >> score[1] >> score[2] >> score[3] >> score[4];

	for (int i = 0; i < 5; ++i) {
		if (score[i] < 40) score[i] = 40;
	}

	std::cout << (score[0] + score[1] + score[2] + score[3] + score[4]) / 5;
}
