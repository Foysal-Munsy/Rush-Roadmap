/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/22         *
 *    Time: 23:03:42           *
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

    int evn = 0;
    bool flag = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] % 2) == 0)
            evn++;
        if (a[i] % k == 0)
            flag = true;
    }
    if (flag)
    {
        cout << 0 << nl;
        return;
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int rem = (k - a[i] % k);
        ans = min(ans, rem);
    }

    if (k == 4)
    {
        if (evn >= 2)
            ans = 0;
        else if (evn == 1)
            ans = min(1, ans);
        else if (evn == 0)
            ans = min(2, ans);
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