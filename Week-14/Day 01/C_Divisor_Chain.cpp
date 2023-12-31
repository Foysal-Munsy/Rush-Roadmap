/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solution()
{
    int x;
    cin >> x;
    vector<int> ans;

    int n = x;
    for (int i = 0; i < n; i += 2)
    {
        if ((1 << i) <= x)
            ans.push_back(1 << i);
    }
    if (ans.back() != 1)
    {
        int diff = x - ans.back();
        for (int i = 30; i >= 0; i--)
        {
            if (diff & (1 << i))
                ans.push_back(ans.back() + (1 << i));
        }
    }

    cout << ans.size() << "\n";
    reverse(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
    cout << "\n";
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
        solution();
        cs++;
    }
    return 0;
}