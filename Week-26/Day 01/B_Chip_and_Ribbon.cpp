//
// Created by Foysal Munsy on 24 / 11 / 2023
// Time: 21 : 19 : 26
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
    long long n;
    cin >> n;
    vector<long long> c(n), track(n);
    for (auto &i : c)
        cin >> i;

    long long ans = c[0] - 1;
    for (int i = 1; i < n; i++)
    {
        if (c[i] > c[i - 1])
        {
            ans += (c[i] - c[i - 1]);
        }
    }
    cout << ans << '\n';
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