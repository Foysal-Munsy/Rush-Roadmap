//
// Created by Foysal Munsy on 13 / 12 / 2023
// Time: 20 : 45 : 32
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
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    map<int, int> mp;
    for (int i = 0, a; i < n; i++)
    {
        cin >> a;
        vp[i].first = a;
    }
    for (int i = 0, b; i < n; i++)
    {
        cin >> b;
        if (b >= 0)
            vp[i].second = b;
        else
            vp[i].second = 0;

        if (mp.find(vp[i].first) == mp.end() || mp[vp[i].first] < vp[i].second)
        {
            mp[vp[i].first] = vp[i].second;
        }
    }

    int ans = 0;
    for (auto [i, v] : mp)
    {
        ans += v;
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