//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 18 : 07 : 12
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
    long long n, k, pair = 0;
    cin >> n >> k;
    vector<long long> cnt(k, 0);

    for (long long i = 1; i <= n; i++)
    {
        debug(i, k, pair);
        if (i % k == 0)
            pair += cnt[0];
        else
        {
            pair += cnt[k - i % k]; // 1%3=0
            debug(cnt, pair);
        }
        cnt[i % k]++;
    }
    debug(cnt);
    HERE;
    cout << pair << '\n';
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