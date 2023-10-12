/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/07         *
 *    Time: 21:18:49           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, m;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<pair<ll, ll>> b;
    for (ll i = 0, x; i < m; i++)
    {
        cin >> x;
        b.push_back({x, i});
    }

    vector<ll> track(n);
    track[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        track[i] = track[i - 1] + a[i];
    }
    sort(b.begin(), b.end());

    ll i = 0, j = 0;
    vector<ll> ans(m);
    while (i < b.size() and j < n)
    {
        if (b[i].first <= track[j])
        {
            ans[b[i].second] = j + 1;
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < m; i++)
        cout << ans[i] << nl;
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