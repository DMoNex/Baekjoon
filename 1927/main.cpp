#include <iostream>
using namespace std;

int output_check(unsigned int* min_heap, int size) {
	int iter = 1;
	unsigned int result = min_heap[1];
	min_heap[1] = min_heap[size];
	
	while (iter * 2 < size) {
		if (min_heap[iter * 2 + 1] == 0 && min_heap[iter] > min_heap[iter * 2]) {
			swap(min_heap[iter], min_heap[iter * 2]);
			iter *= 2;
		}
		else if (min_heap[iter] > min_heap[iter * 2] && min_heap[iter] > min_heap[iter * 2 + 1]) {
			if (min_heap[iter * 2] <= min_heap[iter * 2 + 1]) {
				swap(min_heap[iter], min_heap[iter * 2]);
				iter *= 2;
			}
			else {
				swap(min_heap[iter], min_heap[iter * 2 + 1]);
				iter *= 2;
				++iter;
			}
		}
		else if (min_heap[iter] > min_heap[iter * 2]) {
			swap(min_heap[iter], min_heap[iter * 2]);
			iter *= 2;
		}
		else if (min_heap[iter] > min_heap[iter * 2 + 1]) {
			swap(min_heap[iter], min_heap[iter * 2 + 1]);
			iter *= 2;
			++iter;
		}
		else break;
	}

	return result;
}

void input_check(unsigned int* min_heap, int iter, int value) {
	min_heap[iter] = value;
	while (iter != 0) {
		if (min_heap[iter] < min_heap[iter / 2])
			swap(min_heap[iter], min_heap[iter / 2]);

		iter /= 2;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int min_heap[100001] = { 0 };
	int input, N, iter = 1;
	
	cin >> N;
	while (N--) {
		cin >> input;

		if (input != 0) 
			input_check(min_heap, iter++, input);
		else {
			if (iter == 1)
				cout << 0 << '\n';
			else
				cout << output_check(min_heap, --iter) << '\n';
		}
	}
}
