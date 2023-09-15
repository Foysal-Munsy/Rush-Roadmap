/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/15         *
 *    Time: 19:57:43           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    k = 240 - k;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (k - i * 5 < 0)
        {
            cout << i - 1 << endl;
            return;
        }
        k -= i * 5;
    }
    cout << n << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}