//
// Created by Foysal Munsy on 29 / 12 / 2023
// Time: 07 : 21 : 33
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    map<int, int> mp;
    int a, b, c;
    cin >> a >> b >> c;
    mp[a]++, mp[b]++, mp[c]++;
    for (auto &i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << '\n';
            break;
        }
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