/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/14         *
 *    Time: 20:19:18           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> st;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    ll distinct = 0, others = -1;
    for (auto [val, count] : mp)
    {
        if (count > 1)
            others = max(others, count);
    }
    // ll diff = (others + st.size()) - n;
    // cout << (st.size() == n ? 1 : others - diff) << nl;
    // cout << others;
    if (st.size() == n)
    {
        cout << 1 << nl;
    }
    else if (st.size() < others)
    {
        cout << st.size() << nl;
    }
    else if (st.size() == others)
    {
        cout << st.size() - 1 << nl;
    }
    else
    {
        cout << others << nl;
    }
    // for (auto i : st)
    //     cout << i << " ";
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