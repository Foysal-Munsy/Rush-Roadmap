//
// Created by Foysal Munsy on 29 / 06 / 2024
// Time: 21 : 18 : 55
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
    string a, b;
    cin >> a >> b;
    // a fixed
    int i = 0, x = 0;
    while (i < b.size())
    {
        //
        int idx = i, len = 0, j = 0;
        while (j < a.size() && idx < b.size())
        {
            if (a[j] == b[idx])
            {
                idx++, len++;
            }
            j++;
        }
        x = max(x, len);
        i++;
    }
    cout << a.size() + b.size() - x << '\n';
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