//
// Created by Foysal Munsy on 06 / 12 / 2023
// Time: 20 : 11 : 26
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
    long long n;
    cin >> n;
    string s;
    cin >> s;
    map<char, long long> mp;
    for (auto &ch : s)
        mp[ch]++;
    long long sz = mp.size();
    if (sz == n)
    {
        if (n & 1)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
        return;
    }
    long long mx = 0, tot = 0;
    for (auto [ch, cnt] : mp)
    {
        mx = max(mx, cnt);
        debug(mx);
        tot += cnt;
    }

    tot = abs(tot - mx);
    debug(tot);
    if (mx >= tot)
    {
        cout << mx - tot << '\n';
    }
    else
    {
        cout << ((n & 1) ? 1 : 0) << '\n';
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
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}