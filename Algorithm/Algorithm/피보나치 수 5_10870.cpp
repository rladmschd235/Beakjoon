#include <iostream>
using namespace std;

int Fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n >= 2)
		return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int N; 
	cin >> N;

	cout << Fibo(N);
}