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
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> ans;
    ans.push_back(y);
    // cout << ans.back() << nl;
    for (int i = 1; i < n; i++)
    {
        int diff = ans.back() - i;
        // 200 199 197 194
        ans.push_back(diff);
    }
    // for (auto i : ans)
    //     cout << i << " ";
    // cout << nl;
    if (ans.back() < x) // 194>x theke boro so -1 hobe na
    {
        cout << -1 << nl;
    }
    else
    {
        ans.back() = x;
        // 200 199 197 194--> replace with 100
        //  now 200 199 197 100 is the curr ans.
        //  so reverse
        reverse(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << " ";
        cout << nl;
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