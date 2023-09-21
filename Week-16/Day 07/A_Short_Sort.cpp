/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/21         *
 *    Time: 20:36:19           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    string ans = "abc";
    if (s == ans)
    {
        cout << "YES\n";
        return;
    }
    if (s == "cab" or s == "bca")
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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