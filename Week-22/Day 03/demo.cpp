/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/29         *
 *    Time: 14:56:45           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
// #include "DEBUG_TEMPLATE.h"
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
    int n = 5;
    // cout << n;
    vector<int> a = {1, 2, 3, 3};
    map<int, int> mp;
    for (auto i : a)
        mp[i]++;

    debug(a, n, mp);
    HERE;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}