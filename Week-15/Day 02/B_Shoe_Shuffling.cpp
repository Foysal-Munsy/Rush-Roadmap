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
    ll n;
    cin >> n;
    vector<ll> vp, ans;
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vp.push_back(x);
        ans.push_back(i + 1);
        mp[vp[i]]++;
    }
    // without atleast two value, it is not possible to shuffling
    bool flag = true;
    for (auto [val, count] : mp)
    {
        if (count < 2)
            flag = false;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (vp[i] == vp[i + 1])
            swap(ans[i], ans[i + 1]);
        }
    if (!flag)
        cout << -1 << nl;
    else
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
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