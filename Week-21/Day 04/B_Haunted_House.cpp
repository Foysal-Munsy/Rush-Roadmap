/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/23         *
 *    Time: 20:35:17           *
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
    vector<int> ans;
    for (auto c : s)
    {
        if (c == '1')
            ans.push_back(-1);
        else
            ans.push_back(0);
    }
    sort(ans.rbegin(), ans.rend());
    for (auto i : ans)
        cout << i << " ";
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