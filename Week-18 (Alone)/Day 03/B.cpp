// editorial solution it is

/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/01         *
 *    Time: 13:04:18           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    k--;
    vector<ll> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    ll x = 0, y = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[x])
            x = i;
    for (int i = 1; i < m; i++)
        if (b[i] > b[y])
            y = i;
    if (b[y] > a[x])
        swap(a[x], b[y]);

    if (k & 1)
    {
        x = 0, y = 0;
        for (int i = 1; i < n; i++)
            if (a[i] > a[x])
                x = i;
        for (int i = 1; i < m; i++)
            if (b[i] < b[y])
                y = i;
        swap(a[x], b[y]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];
    cout << ans << nl;
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