/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void test()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x = v[i];
        while (x > n)
            x /= 2;
        while (mp[x] == 1)
            x /= 2;
        if (x > 0)
            mp[x] = 1;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            ans = 1;
            break;
        }
    }

    cout << (ans == 0 ? "YES\n" : "NO\n");
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
        test();
        cs++;
    }
    return 0;
}