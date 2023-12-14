//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 18 : 36 : 14
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
    long long n, d;
    cin >> n >> d;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = d; i < n; i++)
        cout << a[i] << " ";
    for (int i = 0; i < d; i++)
        cout << a[i] << " ";
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