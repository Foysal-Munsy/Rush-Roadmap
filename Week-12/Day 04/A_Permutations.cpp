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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll c = 0, N = n;
    for (; n--;)
    {
        ll x;
        cin >> x;
        if (v[c] == x)
            c++;
        // cout << v[c] << nl, c++;
    }
    // count pailam 4 ta, tahole 5-4=1;
    ll ans = N - c;
    cout << ans << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}