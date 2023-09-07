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
    ll K;
    cin >> K;
    ll ans = 0;
    ll pos = 1;
    // lets say K=22
    // after 1st step K is now 2;
    while (K >= 1)
    {
        ll d = K % 9;
        // 1st step:/ d = 22%9 = 4
        // 2nd step:/  d = 2%9 =>2
        if (d >= 4) // 1st: / 4>=4 ,so d++, now d=5; 2nd--> 2<4 so d unchanged, d=5;
            d++;
        ans += pos * d;
        // 1st step:/ ans = 0 + 1*5 -> ans = 5;
        // 2nd step--> ans = 5 + 10*5 ==>25 ..........
        pos *= 10;
        // 1st step:/pos = 1*10 = 10;
        K /= 9;
        // 1st step:/ K = 22/9 =>2
    }
    cout << ans << "\n";
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