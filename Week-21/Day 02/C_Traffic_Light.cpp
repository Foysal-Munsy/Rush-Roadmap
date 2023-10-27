/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/21         *
 *    Time: 21:29:59           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    vector<ll> clr, grn;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == c)
            clr.push_back(i + 1);
        if (s[i] == 'g')
            grn.push_back(i + 1);
    }
    ll red_start = clr[0], red_last = clr.back(), grn_first = grn[0];
    // cout << red_start << " " << grn_first << " " << red_last;
    ll ans = 0;
    if (red_start < grn_first)
    {
        ans = grn_first - red_start;
    }
    if (red_start > grn_first)
    {

        // ll diff = abs(red_start - n);
        // ans = red_start + diff + grn_first;
        // ans -= red_start;

        ans = red_start + grn_first;
        ans -= n;
    }
    // ekhane arekta condition

    ll res = 0;
    if (red_last > grn_first)
    {
        res = red_last + grn_first;
        res -= n;
    }
    if (red_last < grn_first)
    {
        res = grn_first - red_last;
    }
    ll minimal = max(ans, res);
    cout << minimal << nl;
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