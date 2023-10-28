/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/28         *
 *    Time: 11:55:38           *
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
    string L, R;
    cin >> L >> R;
    int sz1 = L.size(), sz2 = R.size();
    if (sz1 < sz2)
    {
        int diff = sz2 - sz1;
        for (int i = 0; i < diff; i++)
        {
            L.insert(0, "0");
        }
    }
    ll sum = 0, sz = 0;
    for (int i = 0; i < L.size(); i++)
    {
        int diff = abs((L[i] - '0') - (R[i] - '0'));
        sum += diff;
        sz = i;
        if (diff > 0)
            break;
    }
    sz++;
    sz = L.size() - sz;
    for (; sz--;)
        sum += 9;
    cout << sum << nl;
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