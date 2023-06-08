#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int H, W, N, T, Y, X;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		Y = N;
		X = 1;

		while (true)
		{
			if (Y > H)
			{
				Y -= H;
				X++;
			}
			else if(Y < H)
			{
				break;
			}
		}

		if(X < 10) cout << Y << '0' << X << "\n";
		else cout << Y << X << "\n";
	}
}