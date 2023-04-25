#include <iostream>
#include <string>
using namespace std;

string ChangeNumber(string Num)
{
	char temp = Num[2];
	Num[2] = Num[0];
	Num[0] = temp;

	return Num;
}

int main()
{
	string A, B, cA, cB;
	cin >> A >> B;

	cA = ChangeNumber(A);
	cB = ChangeNumber(B);

	cA > cB ? cout << cA : cout << cB;
}