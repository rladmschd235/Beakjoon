#include <iostream>
using namespace std;

int main()
{
	int N, W, H, L;
	int space, maxspace;
	cin >> N >> W >> H >> L;

	space = (W / L) * (H / L);

	if (space > N)
	{
		cout << N;
		return 0;
	}
	cout << space;
}