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
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        mp[x] = i;
    }
    // for (auto i : mp)
    //     cout << i.first << " " << i.second << nl;

    int mx = -1;
    for (auto i : mp)
    {
        for (auto j : mp)
        {
            if (gcd(i.first, j.first) == 1)
            {
                mx = (ll)max(mx, i.second + j.second);
                // cout << i.second + j.second << nl;
            }
        }
    }
    cout << mx << nl;
}
void test()
{
    cout << gcd(7, 4) << nl;
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
        // test();
        cs++;
    }
    return 0;
}