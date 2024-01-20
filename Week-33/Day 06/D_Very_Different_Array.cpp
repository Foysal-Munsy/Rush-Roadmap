//
// Created by Foysal Munsy on 17 / 01 / 2024
// Time: 21 : 16 : 23
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

void solve()
{
    ll n, m, N;
    cin >> n >> m;
    N = n;
    vector<ll> a(n), b(m), c;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(rall(a));
    sort(all(b));

    if (n < m)
    {
        ll mid = n / 2;
        if (n & 1)
            mid++;
        n -= mid;
        for (int i = 0; i < mid; i++)
        {
            c.push_back(b[i]);
            b[i] = 0;
        }
        reverse(all(b));
        ll i = 0;
        for (; n--;)
        {
            c.push_back(b[i]);
            b[i] = 0;
            i++;
        }
    }
    else
        c = b;

    ll sum = 0;
    if (N == 1)
    {
        for (int i = 0; i < m; i++)
        {
            ll dif = abs(a[0] - b[i]);
            sum = max(sum, dif);
        }
    }
    else
        for (int i = 0; i < N; i++)
        {
            ll dif = abs(a[i] - c[i]);
            sum += dif;
        }
    cout << sum << nl;
    debug(a, b, c);
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