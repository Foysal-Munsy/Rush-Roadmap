/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/15         *
 *    Time: 21:41:40           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
// bool compare(pair<ll, ll> a, pair<ll, ll> b)
// {
//     return a.second < b.second;
// }
void solve()
{
    ll n, r, avg, sum = 0;
    cin >> n >> r >> avg;
    vector<pair<ll, ll>> vp;
    for (ll i = 0, ai, bi; i < n; i++)
    {
        cin >> ai >> bi;
        vp.push_back({bi, ai});
        sum += ai;
    }
    // cout << sum;
    sort(vp.begin(), vp.end());
    ll lekha_lagbe = 0;
    for (auto [bi, ai] : vp)
    {
        if (sum >= avg * n)
            break;
        ll baki = min(avg * n - sum, r - ai);
        // cout << baki << nl;
        sum += baki;
        // cout << sum << nl;
        lekha_lagbe += baki * bi;
        // cout << lekha_lagbe << nl;
    }
    // cout << lekha_lagbe << nl;
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