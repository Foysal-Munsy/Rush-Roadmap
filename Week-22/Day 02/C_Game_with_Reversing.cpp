/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/28         *
 *    Time: 12:40:08           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            count_1++;
    }
    reverse(t.begin(), t.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            count_2++;
    }
    int ans = 0;
    if (count_1 == 0)
        ans = 0;
    else if (count_2 == 0)
        ans = 2;
    else
    {
        int res1 = (count_1 * 2 - (count_1 & 1));
        int res2 = (count_2 * 2 - !(count_2 & 1));
        ans = min(res1, res2);
    }
    cout << ans << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
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