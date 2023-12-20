//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 07 : 56 : 12
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
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(all(a));
    int k;
    cin >> k;
    for (; k--;)
    {
        int l, r;
        cin >> l >> r;
        auto it = lower_bound(all(a), l);
        auto itt = upper_bound(all(a), r);
        cout << abs((it - a.begin()) - (itt - a.begin())) << " ";
    }
    cout << '\n';
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