/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/30         *
 *    Time: 23:37:09           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    string s, t;
    cin >> s;
    cin >> t;
    ll a = 0;
    ll sz = t.size();
    for (ll i = 0; i < sz; i++)
        a += (t[i] == 'a');

    if (a == sz && a == 1)
        cout << 1 << '\n';
    else if (a >= 1)
        cout << -1 << '\n';
    else
        cout << power(2, s.size()) << '\n';
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