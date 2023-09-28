/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/27         *
 *    Time: 22:44:19           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, N;
    cin >> n;
    N = n;
    set<int> st;
    unordered_map<int, int> mp;
    for (; n--;)
    {
        int k;
        cin >> k;
        for (int i = 0, x; i < k; i++)
        {
            cin >> x;
            // st.insert(x);
            mp[x]++;
        }
    }
    int mx_len = -1000, mn_len = 1000;
    for (auto [first, sec] : mp)
    {
        if (sec == 1)
            continue;
        mx_len = max(mx_len, sec);
        mn_len = min(mn_len, sec);
    }
    cout << mx_len + mn_len;
    cout << nl;
    // cout << (1 < N ? st.size() - 1 : 0) << nl;
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