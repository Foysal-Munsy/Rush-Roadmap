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
    /*taken input*/
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (auto &i : a)
        cin >> i;
    ll X = 1;
    for (ll i = 0; i < n; i++)
    {
        ll exp;
        cin >> exp;
        b.push_back(exp);
        X *= pow(a[i], exp);
    }
    // cout << X << nl;
    ll m;
    cin >> m;
    vector<ll> c(m), d;
    for (auto &i : c)
        cin >> i;
    ll Y = 1;
    for (ll i = 0; i < m; i++)
    {
        ll exp;
        cin >> exp;
        d.push_back(exp);
        Y *= pow(c[i], exp);
    }
    // cout << Y << nl;

    /*output process form here*/

    // lcm = X, GCD= Y
    const ll MOD = 998244353;
    if (X % Y != 0)
    {
        cout << 0 << nl;
        return;
    }
    ll L = X / Y;
    ll k = 0;
    for (ll i = 2; i <= sqrt(L); i++)
    {
        if (L % i == 0)
        {
            k++;
            while (L % i == 0)
                L /= i;
        }
    }
    if (L > 1)
        k++;
    ll res = 1;
    for (int i = 0; i < k; i++)
        res = (res * 2) % MOD;
    cout << res << nl;
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
