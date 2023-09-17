/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/18         *
 *    Time: 00:41:50           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mid = n / 2;
    string left, right;
    left = s.substr(0, mid), right = s.substr(mid);
    // cout << left << " " << right << nl;
    // cout << left << right << nl;
    set<char> l(left.begin(), left.end());
    set<char> r(right.begin(), right.end());

    int ans = l.size() + r.size();
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
        solve();
        cs++;
    }
    return 0;
}