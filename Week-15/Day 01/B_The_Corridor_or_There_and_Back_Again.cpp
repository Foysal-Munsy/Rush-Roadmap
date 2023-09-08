/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void test()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (; n--;)
    {
        int di, si;
        cin >> di >> si;
        vp.push_back({di, si});
    }

    int obosthan = 0, jaite_parbo = 0, ans = 1e9;
    for (auto [di, si] : vp)
    {
        obosthan = di;
        jaite_parbo = (si - 1) / 2;
        ans = min(ans, obosthan + jaite_parbo);
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
        // solve();
        test();
        cs++;
    }
    return 0;
}