#include <iostream>
#include <string>
using namespace std;

int getDiff(string A, string B) {
	int ret = 0;
	for (int i = 0; i < 6; ++i) {
		if (A[i] != B[i])
			ret++;
	}
	
	return ret;
}

int main() {
	int N;
	string strA = "000000", strB = "001111", strC = "010011", strD = "011100", strE = "100110", strF = "101001", strG = "110101", strH = "111010";
	string input, res, tmp;
	cin >> N >> input;

	int i = 0;
	res.clear();
	while (i < input.size()) {
		tmp.clear();
		tmp = input.substr(i, 6);
		
		if (getDiff(tmp, strA) < 2)
			res += "A";
		else if (getDiff(tmp, strB) < 2)
			res += "B";
		else if (getDiff(tmp, strC) < 2)
			res += "C";
		else if (getDiff(tmp, strD) < 2)
			res += "D";
		else if (getDiff(tmp, strE) < 2)
			res += "E";
		else if (getDiff(tmp, strF) < 2)
			res += "F";
		else if (getDiff(tmp, strG) < 2)
			res += "G";
		else if (getDiff(tmp, strH) < 2)
			res += "H";
		else {
			cout << i / 6 + 1;
			return 0;
		}
		
		i += 6;
	}

	cout << res;
}
