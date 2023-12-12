//
// Created by Foysal Munsy on 11 / 12 / 2023
// Time: 20 : 38 : 00
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
    long long n;
    cin >> n;
    vector<long long> a(n, 0);
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    long long i = n, new_i, curr_score = 0, mx_score = 0;
    while (i--)
    {
        curr_score = a[i];
        new_i = i + a[i];
        debug(i, new_i, curr_score);
        if (new_i < n)
            curr_score += a[new_i];
        a[i] = curr_score;
        mx_score = max(mx_score, curr_score);
    }
    // for (auto i : a)
    //     cout << i << " ";
    // cout << '\n';
    cout << mx_score << '\n';
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
