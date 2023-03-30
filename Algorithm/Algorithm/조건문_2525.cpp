#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	int H = 0, M = 0;
	cin >> A >> B >> C;
	
	H = A;
	M = B + C;

	if (M >= 60) {
		H = (M / 60) + A;
		M = M % 60;

		if (H >= 24) {
			H -= 24;
		}
	}

	cout << H << " " << M;
}