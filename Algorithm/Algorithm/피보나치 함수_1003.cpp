#include <iostream>
using namespace std;

int main()
{
    int zeroFibo[41] = { 0 };
    int firstFibo[41] = { 0 };
    int N, T;

    cin >> N;

    zeroFibo[0] = 1;
    zeroFibo[1] = 0;
    zeroFibo[2] = 1;

    firstFibo[0] = 0;
    firstFibo[1] = 1;
    firstFibo[2] = 1;

    for (int i = 0; i < N; i++)
    {
        cin >> T;

        for (int j = 2; j < T+1; j++)
        {
            zeroFibo[j] = zeroFibo[j - 1] + zeroFibo[j - 2];
            firstFibo[j] = firstFibo[j - 1] + firstFibo[j - 2];
        }

        cout << zeroFibo[T] << " " << firstFibo[T] << "\n";
    }
}