/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/15         *
 *    Time: 21:13:44           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());

    double max_dst = max(a[0], l - a.back()) * 2.0;
    // cout << fixed << setprecision(10) << max_dst << nl;
    for (ll i = 1; i < n; i++)
    {
        max_dst = max(max_dst, double(a[i] - a[i - 1]));
    }
    max_dst /= 2.0;

    cout << fixed << setprecision(10) << max_dst << nl;
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