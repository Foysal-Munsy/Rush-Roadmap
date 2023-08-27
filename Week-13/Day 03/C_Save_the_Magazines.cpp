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
    string s;
    cin >> s;
    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;
    ll zero_count = 0;
    for (auto c : s)
    {
        if (c == '0')
            zero_count++;
    }
    ll i = 0, sum = 0, mx = 0;
    for (auto c : s)
    {
        if (c == '1' and zero_count > 1)
        {
            mx = max(v[i], v[i + 1]);
            sum += mx;
            if (v[i] > v[i + 1])
                v[i] = 0;
            else
                v[i + 1] = 0;
            mx = 0;
            i++;
        }
        if (zero_count == 1)
        {
            sort(v.begin(), v.end(), greater<ll>());
            sum = accumulate(v.begin(), v.end() - 1, 0);
        }
    }
    cout << sum << nl;
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