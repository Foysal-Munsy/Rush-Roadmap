/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/26         *
 *    Time: 20:53:07           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> b;
    for (int i = 1; i <= n + n; i++)
    {
        if (i & 1)
            b.push_back(i);
    }
    for (int i = 1; i <= n - 2; i++)
    {
        if ((b[i] + b[i + 1]) % (3 * b[i]) == 0)
        {
            cout << "NO\n";
            return;
        }
        else
        {
            cout << "YES\n";
            return;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}