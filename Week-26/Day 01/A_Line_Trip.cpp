//
// Created by Foysal Munsy on 24 / 11 / 2023
// Time: 20 : 41 : 24
//
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int diff1 = a[0], diff2 = 2 * (x - a[n - 1]);
    int diff3 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int len = abs(a[i] - a[i + 1]);
        diff3 = max(len, diff3);
    }
    cout << max(diff1, max(diff2, diff3)) << '\n';
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