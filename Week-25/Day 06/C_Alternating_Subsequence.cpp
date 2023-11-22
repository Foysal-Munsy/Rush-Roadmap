//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 23 : 20 : 42
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

    long long ans = 0, max_ele = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] * a[i - 1] < 0) // if diff sign
        {
            ans += max_ele;
            max_ele = a[i];
        }
        else
        {
            max_ele = max(max_ele, a[i]);
        }
    }

    ans += max_ele;

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