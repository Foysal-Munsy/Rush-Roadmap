/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/24         *
 *    Time: 12:08:35           *
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
    int n = 100; // a = 10;
    // int a[] = {10, 20};
    int arr[3] = {1, 2, 3};
    std::pair<int, int> v = {0, 2};
    // cout << n + n << nl;
    // vector<int> a = {4, 5, 7};
    // cout << "MY vector: ";
    // for (auto i : a)
    //     cout << i << " ";
    // cout << nl;
    debug(n, v);
    HERE;
    // int c = 20;
    // debug(c);
    // HERE;
    map<int, int> mp;
    int x, y, z;
    cin >> x >> y >> z;
    mp[10] = x;
    mp[2] = y;
    mp[5] = z;
    for (auto [i, v] : mp)
    {
        cout << i << " " << v << nl;
    }
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