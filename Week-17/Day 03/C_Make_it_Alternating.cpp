/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/24         *
 *    Time: 22:58:03           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
const ll mod = 998244353;
string s;

void solve()
{
    cin >> s;
    ll n = s.length();
    vector<ll> V;
    ll count = 0, last_indx = n - 1;
    for (ll i = 0; i < n; i++)
    {
        count++;
        if (i == last_indx or s[i] != s[i + 1])
        {
            V.push_back(count);
            count = 0;
        }
    }
    ll min_operations = 0, short_sequence = 1;

    for (auto val : V)
    {
        min_operations += (val - 1);
        // 3-1=2
        // cout << min_operations << " ";
        short_sequence *= val;
        // 1*3=3
        short_sequence %= mod;
        // cout << short_sequence << nl;
    }

    for (ll i = 0; i < min_operations; i++)
    {
        short_sequence *= i + 1;
        short_sequence %= mod;
    }

    cout << min_operations << " " << short_sequence << nl;
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