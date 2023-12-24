//
// Created by Foysal Munsy on 23 / 12 / 2023
// Time: 21 : 23 : 07
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
const int N = 1e18;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    for (ll i = 2; i <= N; i *= 2)
    {
        set<ll> rem;

        for (int idx = 0; idx < n; idx++)
        {
            rem.insert(a[idx] % i);
        }

        if (rem.size() == 2)
        {
            cout << i << nl;
            break;
        }
    }
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