#include <iostream>
using namespace std;

// 너도 나중에 다시 강해져서 돌아온다...
int main()
{
	int n, m, divide, remain;
	cin >> n >> m;

	divide = n / m;
	remain = n % m;

	cout << divide << endl << remain;
}