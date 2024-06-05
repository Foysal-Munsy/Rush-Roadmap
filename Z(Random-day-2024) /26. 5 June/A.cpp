//
// Created by Foysal Munsy on 05 / 06 / 2024
// Time: 21 : 10 : 26
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
    int n, sum = 0;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int st = a[i].second * a[j].first + a[i].first * a[j].second;
            ans = max(ans, st);
        }
    }
    cout << ans << "\n";
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