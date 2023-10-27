/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/22         *
 *    Time: 18:29:44           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
        mp[c]++;

    int odd = 0;
    for (auto [c, i] : mp)
        if (i & 1)
            odd++;

    cout << (odd <= k + 1 ? "YES\n" : "NO\n");
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