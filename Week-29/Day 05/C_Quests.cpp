//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 21 : 32 : 06
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int n, k, ans = 0, tot = 0, mx = 0;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (k == i) // jodi k quest cmplt kore
            break;
        ans += a[i];                            // 1st cmpltn
        mx = max(mx, b[i]);                     // mx b
        tot = max(ans + (k - i - 1) * mx, tot); // curr tot exp points or  tot exp points gained plus the exp point
        // int t = (k - i - 1);
        // debug(ans, mx, t, tot);
    }
    cout << tot << nl;
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