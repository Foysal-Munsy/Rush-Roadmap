//
// Created by Foysal Munsy on 05 / 06 / 2024
// Time: 23 : 21 : 28
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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n + 1);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    ll last = b[n], less = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        less = abs(last - b[i]);
        sum += abs(a[i] - b[i]);
    }
    sum += less;
    (sum == 0 ? sum = 1 : sum);
    cout << sum << nl;
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