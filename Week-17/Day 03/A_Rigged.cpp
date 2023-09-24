/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/24         *
 *    Time: 20:47:49           *
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
    vector<int> s(n), e(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> e[i];
    }

    int lift = e[0];
    int w = s[0];
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (w <= s[i] and lift <= e[i])
            flag = false;
    }
    cout << (flag ? w - 1 : -1) << nl;
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