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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int ans = 1e9;
    for (int i = 0; i <= 100; i++)
    {
        set<int> s;
        for (int j = 0; j < n; j++)
        {
            if (i != a[j])
                s.insert(abs(i - a[j]));
        }

        if (s.size() == 1)
            ans = min(ans, *s.begin());
        else if (s.size() == 0)
        {
            cout << 0 << "\n";
            return;
        }
    }
    if (ans == 1e9)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}