//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 20 : 52 : 46
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
    long long n, boy, k;
    cin >> n >> boy >> k;
    long long girl = abs(n - boy);
    long long rem_girl = girl % k, rem_boy = boy % k;
    debug(rem_boy, rem_girl);
    cout << abs(rem_boy - rem_girl) << '\n';
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