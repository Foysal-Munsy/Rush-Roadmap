/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/27         *
 *    Time: 23:33:47           *
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
    int miha = 0, bani = 0;
    for (; n--;)
    {
        int x;
        cin >> x;
        if (x & 1)
            bani += x;
        else
            miha += x;
    }
    cout << (miha > bani ? "YES" : "NO") << nl;
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