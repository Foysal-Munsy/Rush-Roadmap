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
    vector<ll> v;
    deque<ll> dq;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end());
    // for (auto i : dq)
    //     cout << i << " ";
    // cout << nl;
    // 4 2 2 3 4
    // 2 2 3 4 4
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (dq[i] + 1 != dq[i + 1])
            ans++;
    }
    cout << ans << nl;
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