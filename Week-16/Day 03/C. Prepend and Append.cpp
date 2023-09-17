/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/18         *
 *    Time: 00:29:38           *
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
    if (s[0] == s[n - 1])
    {
        cout << n << nl;
        return;
    }
    string temp = s;
    reverse(temp.begin(), temp.end());
    // cout << s << nl;
    // cout << temp << nl;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == temp[i])
            break;
        else
            cnt++;
    }
    int ans = n - cnt * 2;
    cout << (ans > 0 ? ans : 0) << nl;
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