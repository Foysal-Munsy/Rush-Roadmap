/*Progress is progress, no matter how small.
 Every step you take is a step closer to your goal.*/
// Created by Foysal Munsy on 10 / 11 / 2023
// Time: 18 : 58 : 08
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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int mx_welfare = *max_element(a.begin(), a.end());
    int tot = 0;
    for (int i = 0; i < n; ++i)
    {
        tot += mx_welfare - a[i];
    }
    cout << tot << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    solve();

    return 0;
}