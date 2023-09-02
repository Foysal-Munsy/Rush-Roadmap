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

    int n = 1;
    while (n <= x)
    {
        ans.push_back(n);
        n *= 2;
    }
    if (ans.back() != x)
    {

        int diff = x - ans.back();

        // 14-8=6
        int i = 32;
        for (; i > 0;)
        {
            int sesh = ans.back();
            if (diff & (1 << i))
                ans.push_back(sesh + (1 << i));
            i--;
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