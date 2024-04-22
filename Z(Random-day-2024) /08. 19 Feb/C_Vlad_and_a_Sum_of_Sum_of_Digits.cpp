//
// Created by Foysal Munsy on 19 / 02 / 2024
// Time: 20 : 57 : 20
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

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    vector<ll> digit_sum(N, 0), a(N, 0);
    for (ll i = 1; i < N; i++)
    {
        ll n = i, sum = digit_sum[i / 10];
        sum += i % 10;
        digit_sum[i] = sum;
        a[i] = a[i - 1] + digit_sum[i];
    }
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        ll n;
        cin >> n;
        cout << a[n] << '\n';
        cs++;
    }
    return 0;
}