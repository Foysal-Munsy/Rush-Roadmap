//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 20 : 46 : 04
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
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (auto &i : a)
        cin >> i;
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum ^= a[i];
    }
    int mn = xor_sum;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, xor_sum ^ a[i]);
    }
    cout << mn << '\n';
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