	#include <iostream>
	using namespace std;

	int main() {
		int H, M;
		cin >> H >> M;

		if (H == 0 && M < 45) {
			H = 23;
			M = (60 + M) - 45;
		}
		else if (H == 0 && M >= 45) {
			H = 0;
			M -= 45;
		}
		else if (H > 0 && M >= 45) {
			//H -= 1;
			M -= 45;
		}
		else {
			H -= 1;
			M = (60 + M) - 45;
		}

		if (M < 0) {
			M *= -1;
		}

		cout << H << " " << M;
	}