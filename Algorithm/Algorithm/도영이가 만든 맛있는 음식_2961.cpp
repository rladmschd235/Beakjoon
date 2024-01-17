#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, s, b;
    vector<pair<int, int>> v;
    cin >> n;
    while (n--)
    {
        cin >> s >> b;
        v.push_back({ s,b });
    }
    int ans = 1000000000;
    //n���� ���ҷ� ���� �� �ִ� �κ� ������ ��(����������) : 2��n��-1
    for (int i = 1; i < (1 << n); i++)
    {
        int s_sum = 1, b_sum = 0;
        // ���õ� ��� Ȯ�� 
        for (int x = 0; x < n; x++)
        {
            if (i & (x << 1)) // i�� ��ᰡ ���õǾ��ٸ� 
            {
                s_sum *= v[x].first;
                b_sum += v[x].second;
            }
        }
        ans = min(ans, abs(s_sum - b_sum));
    }
    cout << ans;
}