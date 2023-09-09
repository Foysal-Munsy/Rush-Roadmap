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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    vector<ll> pref(n + 1);
    for (ll i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i - 1];

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll target = pref[i], curr = 0, cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            curr += a[j];
            if (curr > target)
            {
                cnt = -1;
                break;
            }
            if (curr == target)
            {
                curr = 0;
                cnt++;
            }
        }
        if (curr == 0)
            ans = max(ans, cnt);
    }
    cout << (n - ans) << nl;
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