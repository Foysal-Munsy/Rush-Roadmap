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
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    vector<ll> pos(m);
    for (auto &i : pos)
        cin >> i;
    for (ll i = 0; i < n; i++)
    {
        // pos(𝑎𝑖)<pos(𝑎𝑖+1)≤pos(𝑎𝑖)+𝑑 for all 1≤𝑖<𝑚

        for (ll ai = 0; ai < m; ai++)
        {
            if ((v[pos[ai]] < v[pos[ai + 1]]) <= v[pos[ai]] + d)
            {
                cout << v[i] << " ";
            }
        }
    }
    cout << nl;
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
        cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}