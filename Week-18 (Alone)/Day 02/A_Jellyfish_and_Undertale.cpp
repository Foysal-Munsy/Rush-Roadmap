/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/30         *
 *    Time: 20:42:29           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll max, init, n;
    cin >> max >> init >> n;
    vector<ll> v;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x < max)
            v.push_back(x);
        if (x >= max)
            v.push_back(max - 1);
    }
    for (auto i : v)
        init += i;
    cout << init << nl;
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