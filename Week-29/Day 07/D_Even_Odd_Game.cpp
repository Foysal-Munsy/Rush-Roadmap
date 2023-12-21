//
// Created by Foysal Munsy on 21 / 12 / 2023
// Time: 15 : 45 : 06
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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(rall(a));
    ll s_a = 0, s_b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0 and a[i] % 2 == 0)
            s_a += a[i];
        else if (i % 2 != 0 and a[i] % 2 != 0)
            s_b += a[i];
    }
    cout << ((s_a == s_b) ? "Tie\n" : (s_a > s_b ? "Alice\n" : "Bob\n"));
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