#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int H, W, N, T, result;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		
		if (N % H == 0)
		{
			result = H * 100 + (N / H);
		}
		else
		{
			result = (N % H) * 100 + (N / H) + 1;
		}
		
		cout << result << "\n";
	}
}