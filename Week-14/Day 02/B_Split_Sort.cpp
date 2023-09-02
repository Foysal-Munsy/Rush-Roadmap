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
    vector<bool> visited(n + 1, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (!visited[v[i] - 1] and v[i] - 1 != 0)
        {
            count++;
            visited[v[i]] = true;
        }
        visited[v[i]] = true;
    }
    cout << count << nl;
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