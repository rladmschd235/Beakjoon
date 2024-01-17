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
    //n개의 원소로 만들 수 있는 부분 집합의 수(공집합제외) : 2의n승-1
    for (int i = 1; i < (1 << n); i++)
    {
        int s_sum = 1, b_sum = 0;
        // 선택된 재료 확인 
        for (int x = 0; x < n; x++)
        {
            if (i & (x << 1)) // i번 재료가 선택되었다면 
            {
                s_sum *= v[x].first;
                b_sum += v[x].second;
            }
        }
        ans = min(ans, abs(s_sum - b_sum));
    }
    cout << ans;
}