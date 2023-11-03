/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/30         *
 *    Time: 12:13:51           *
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int sum = a[0];
    for (int i = 1; i < n; i++)
    {
        sum &= a[i];
        debug(sum);
        if (sum == 0)
        {
            count++;
            if (i + 1 < n)
            {
                sum = a[i + 1];
            }
            else
                sum = 0;
        }
        // debug(sum);
        debug(count);
    }
    count = (count == 0 or n == 1 ? count = 1 : count);
    cout << count << nl;
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