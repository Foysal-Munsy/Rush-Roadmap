/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << 0 << nl;
        return;
    }
    int mx = max(a, b);
    int mn = min(a, b);
    int count = 0;
    while (mx > mn)
    {
        mn += c;
        mx -= c;
        count++;
    }
    cout << count << nl;
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