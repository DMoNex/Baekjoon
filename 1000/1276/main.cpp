#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node {
public:
	int y;
	int a;
	int b;

	node() {
		this->y = 0;
		this->a = 0;
		this->b = 0;
	}
	node(int y, int a, int b) {
		this->y = y;
		this->a = a;
		this->b = b;
	}
};

bool sorter(node a, node b) {
	if (a.y < b.y) return true;
	else return false;
}

int main() {
	int N, left = 0, right = 0;
	long long res = 0;

	cin >> N;
	vector<node> height(N);
	for (int i = 0; i < N; ++i)
		cin >> height[i].y >> height[i].a >> height[i].b;

	sort(height.begin(), height.end(), sorter);

	for (int i = 0; i < height.size(); ++i) {
		left = right = height[i].y;

		for (int j = 0; j < i; ++j) {
			if (height[i].a >= height[j].a && height[i].a < height[j].b)
				left = (height[i].y - height[j].y);

			if (height[i].b > height[j].a && height[i].b <= height[j].b)
				right = (height[i].y - height[j].y);
		}

		res += (left + right);
	}

	cout << res;
}
