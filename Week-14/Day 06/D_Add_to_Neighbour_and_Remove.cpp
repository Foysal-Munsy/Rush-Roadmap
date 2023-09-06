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
    vector<ll> a(n);
    int pref = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref += a[i];
    }
    ll max_val = *max(a.begin(), a.end());
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != max_val)
        {
            if (a[i - 1] < a[i])
            {
                a[i - 1] += a[i];
                a.erase(a.begin() + i);
            }
        }
    }
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