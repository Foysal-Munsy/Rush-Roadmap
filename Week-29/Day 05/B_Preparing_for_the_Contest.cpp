//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 21 : 04 : 08
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
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    if (k == 0)
    {
        reverse(all(a));
        for (auto &i : a)
            cout << i << " ";
        cout << nl;
        return;
    }
    else
    {
        int sz = n - k;
        cout << a[0] << " ";
        for (int i = sz; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = sz - 1; i >= 1; i--)
        {
            cout << a[i] << " ";
        }
        cout << nl;
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