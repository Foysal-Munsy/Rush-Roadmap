/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/11         *
 *    Time: 21:08:08           *
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

    if (n < 7 or n == 9)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (n % 3 != 0)
    {
        cout << 1 << " " << 2 << " " << n - 3 << nl;
    }
    else
    {
        cout << 4 << " " << 1 << " " << n - 5 << nl;
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