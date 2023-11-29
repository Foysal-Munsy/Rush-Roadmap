//
// Created by Foysal Munsy on 28 / 11 / 2023
// Time: 21 : 13 : 13
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
    vector<long long> a(n), b;
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    debug(a);
    HERE;
    long long sum = 0, mx = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        long long diff = abs(a[i + 1] - a[i]);
        sum += diff;
        b.push_back(diff);
    }
    cout << sum << nl;
    debug(b);
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