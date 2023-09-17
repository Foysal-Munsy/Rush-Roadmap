/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/17         *
 *    Time: 23:17:03           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v, pref;
    ll sum = 0;
    ll minus = 0, bad = 1e9;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        pref.push_back(sum += x);
        bad = min(bad, abs(x));
        if (x < 0)
            minus++;
    }
    // for (auto i : pref)
    //     cout << i << " ";
    // cout << nl;
    sum = 0;

    // for (ll i = 0; i < n; i++)
    // {
    //     if (abs(v[i]) <= abs(pref[i]))
    //     {
    //         continue;
    //     }
    //     v[i] = -v[i], v[i + 1] = -v[i + 1];
    // }
    // for (auto i : v)
    //     // sum += i;
    //     cout << i << " ";
    // cout << nl;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] * v[i + 1] < 0)
        {
            ll min_val = min(abs(v[i]), abs(v[i + 1]));
            sum += min_val;
            v[i] > 0 ? v[i] -= min_val : v[i] += min_val;
        }
        sum += abs(v[i]);
    }
    if (minus == n)
    {
        cout << ((n & 1) ? (sum - bad) - bad : sum) << nl;
        return;
    }
    if (minus == 1)
    {
        cout << (sum - bad) - bad << nl;
        return;
    }
    cout << sum << "\n";
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