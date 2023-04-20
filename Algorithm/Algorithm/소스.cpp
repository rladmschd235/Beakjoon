#include <iostream>
using namespace std;

int main()
{
	//int a = 5;
	//int* pA;
	//pA = &a;

	//cout << a << endl;
	//cout << *pA << endl;

	//*pA = 50;
	//cout << a << endl;

	//string number;
	//cout << "주민 등록 번호를 입력하시오: ";
	//cin >> number;
	//cout << number << endl;

	//cout << "-가 제거된 주민등록번호: ";
	//int index = number.find("-");
	//cout << number.erase(index, 1);

	int a[8] = { 0 };
	fill(a, a + 4, 1);
	for (int elem : a)
	{
		cout << elem << endl;
	}
	fill(a + 4, a + sizeof(a) / sizeof(int), 2);
	for (int elem : a)
	{
		cout << elem << endl;
	}
}