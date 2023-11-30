//
// Created by Foysal Munsy on 30 / 11 / 2023
// Time: 17 : 15 : 39
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
    long long n, x, sum = 0;
    cin >> n >> x;
    vector<long long> v, pref, a;
    for (size_t i = 0, val; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    sort(all(v), greater<ll>());
    pref.push_back(0);
    for (long long i = 0, val; i < n; i++)
    {
        sum += v[i];
        pref.push_back(sum);
    }
    long long mx = 0;
    for (long long i = 1; i <= n; i++)
    {
        if ((pref[i] / i) >= x)
        {
            mx = i;
        }
    }
    debug(v, pref);
    cout << mx << '\n';
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