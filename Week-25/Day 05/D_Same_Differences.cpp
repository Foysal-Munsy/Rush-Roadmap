//
// Created by Foysal Munsy on 21 / 11 / 2023
// Time: 21 : 59 : 17
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
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    map<long long, long long> mp;
    for (size_t i = 0; i < n; i++)
    {
        int diff = a[i] - (i + 1);
        mp[diff]++;
    }
    long long ans = 0;
    for (auto [i, cnt] : mp)
    {
        if (cnt > 1)
        {
            ans += cnt * (cnt - 1) / 2;
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