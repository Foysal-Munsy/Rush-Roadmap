//
// Created by Foysal Munsy on 02 / 12 / 2023
// Time: 20 : 58 : 03
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
    vector<int> r(n);
    for (auto &i : r)
        cin >> i;
    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &i : b)
        cin >> i;

    vector<int> a(n + m), pref_r(n + 1, 0), pref_b(m + 1, 0);
    copy(all(r), a.begin());
    copy(all(b), a.begin() + n);
    partial_sum(all(r), pref_r.begin());
    partial_sum(all(b), pref_b.begin());
    int mx_r = *max_element(all(pref_r)), mx_b = *max_element(all(pref_b));
    cout << (mx_r + mx_b) << '\n';
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