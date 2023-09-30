/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/29         *
 *    Time: 19:47:28           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
    }

    sort(v.begin(), v.end());

    int mxx = 0, mnn = INT_MAX;
    vector<pair<int, int>> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        mxx = max(mxx, v[i].second);
        ans[i].first = mxx;
        mnn = min(mnn, v[i].second);
        ans[i].second = mnn;
    }

    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        int mx = ans[i].first, mn = ans[i].second;
        int ans = (mx - mn + 1) * 2;

        int idx = v[i].first;
        mp[idx] = max(mp[idx], ans);
    }
    for (int i = 1; i <= k; i++)
        cout << mp[i] << " ";
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