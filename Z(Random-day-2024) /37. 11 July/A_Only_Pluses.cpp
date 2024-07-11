//
// Created by Foysal Munsy on 11 / 07 / 2024
// Time: 20 : 37 : 47
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
    vector<int> a(3);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    for (int i = 0; i < 5; i++)
    {
        if (a[0] + 1 <= a[1])
        {
            a[0]++;
        }
        else if (a[1] + 1 <= a[2])
        {
            a[1]++;
        }
        else
        {
            a[2]++;
        }
    }
    debug(a, cnt);
    int ans = a[0] * a[1] * a[2];
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