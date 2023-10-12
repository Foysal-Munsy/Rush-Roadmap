/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/09         *
 *    Time: 21:40:51           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

bool is_w(vector<ll> &a, ll c, ll w)
{
    ll total = 0;
    for (auto val : a)
    {
        ll side = (2 * w) + val;
        ll area = side * side;
        total += area;
        if (total > c)
            return false;
    }
    return true;
};
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    ll l = 0, r = 1e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (is_w(a, c, mid)) // if mid==w?
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << nl;
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