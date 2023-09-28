/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/28         *
 *    Time: 16:50:14           *
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
    vector<vector<int>> a(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int sz;
        cin >> sz;
        a[i].resize(sz);
        for (int j = 0; j < sz; j++)
        {
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }

    int res = 0;
    for (int Si = 1; Si <= 50; Si++)
    {
        set<int> ans;
        for (int i = 0; i < n; i++)
        {
            bool found = false;
            for (int j = 0; j < a[i].size(); j++)
            {
                if (a[i][j] == Si)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                for (int j = 0; j < a[i].size(); j++)
                {
                    ans.insert(a[i][j]);
                }
            }
        }
        // for (auto i : ans)
        //     cout << i << " ";
        // cout << nl;
        if (ans != st)
        {
            res = max(res, (int)ans.size());
        }
    }

    cout << res << nl;
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