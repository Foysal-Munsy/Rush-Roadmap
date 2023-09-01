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
    int x;
    cin >> x;
    vector<int> ans;
    int n = x;
    for (int i = 0; i < n; i++)
    {
        if ((1 << i) <= x)
            ans.push_back(1 << i);
    }
    if (ans.back() != 1)
    {
        int diff = x - ans.back();
        // 14-8=6
        for (int i = 30; i >= 0; i--)
        {
            int sesh = ans.back();
            if (diff & (1 << i))
                ans.push_back(sesh + (1 << i));
            // i--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << nl;
    for (auto i : ans)
        cout << i << " ";
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
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}