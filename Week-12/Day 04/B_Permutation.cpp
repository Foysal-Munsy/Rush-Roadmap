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
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    vector<bool> visited(n + 5, false);
    for (auto value : v)
    {
        if (value >= 1 && value <= n)
            visited[value] = true;
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!visited[i + 1])
            // cout << i + 1 << nl;
            count++;
    }
    cout << count << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}