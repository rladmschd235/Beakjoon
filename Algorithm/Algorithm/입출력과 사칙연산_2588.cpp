#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int remain = 0;
	int divide = 1;
	int line3, line4, line5, line6;
	cin >> num1 >> num2;

	for (int i = 0; i < 3; i++) {
		divide *= 10;
		remain = num2 % divide;

		switch (i)
		{
			case 0:
				cout << num1 * remain << endl;
				break;
			case 1:
				cout << num1 * (remain/10) << endl;
				break;
			case 2:
				cout << num1 * (remain/100) << endl;
				break;
		}
	}
	cout << num1 * num2;
}