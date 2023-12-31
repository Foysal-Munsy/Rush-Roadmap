// Sieve of Eratosthenes
// Created by Foysal Munsy on 31 / 12 / 2023
// Time: 08 : 55 : 53
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
const int N = 1e4 + 5;

pair<ll, ll> sieve(ll L, ll R)
{
    ll P = L;
    ll D = 0;
    for (ll i = L; i <= R; i++)
    {
        ll cnt = 0;
        for (ll j = 1; j * j <= i; j++)
        {
            if (j * j == i)
            {
                cnt++;
            }
            else if (i % j == 0)
            {
                cnt += 2;
            }
        }
        if (D < cnt)
        {
            D = cnt;
            P = i;
        }
    }
    return make_pair(P, D);
}

void print(ll L, ll R, ll P, ll D)
{
    cout << "Between " << L << " and " << R << ", " << P << " has a maximum of " << D << " divisors.\n";
}

void solve()
{
    ll L, R;
    cin >> L >> R;
    pair<ll, ll> result = sieve(L, R);
    print(L, R, result.first, result.second);
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