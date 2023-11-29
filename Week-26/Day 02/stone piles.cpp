//
// Created by Foysal Munsy on 26 / 11 / 2023
// Time: 00 : 48 : 02
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
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.rbegin(), a.rend());
    long long pile_1 = a[0], pile_2 = a[1];
    for (int i = 2; i < n; i++)
    {
        if (pile_1 < pile_2)
        {
            pile_1 += a[i];
        }
        else
        {
            pile_2 += a[i];
        }
    }
    cout << abs(pile_1 - pile_2) << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}