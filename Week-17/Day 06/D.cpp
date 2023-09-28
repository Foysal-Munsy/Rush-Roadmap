/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/27         *
 *    Time: 21:07:03           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = k / n;
    vector<ll> ans(n);
    ll count_odd = 0, count_evn = 0;
    ans[0] = x;

    ll j = 1, sum = x;
    bool flag = true;
    for (ll i = 1; i < n - 1; i++)
    {
        x -= j;
        if (x < 1)
        {
            x += 1;
        }

        ans[i] = x;
        sum += x;
    }
    ans[n - 1] = (k - sum);
    for (auto x : ans)
    {
        if (x < 1)
            flag = false;
        if (x & 1)
            count_odd++;
        else
            count_evn++;
    }
    bool ok = true;
    if (count_evn != count_odd)
    {
        ok = false;
    }
    else if (count_evn + count_odd != n)
    {
        ok = false;
    }

    /// output format
    if (!flag or !ok)
    {
        cout << -1 << nl;
    }
    else
    {
        // cout << count_evn << " " << count_odd << nl;
        for (auto i : ans)
            cout << i << " ";
        cout << nl;
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
