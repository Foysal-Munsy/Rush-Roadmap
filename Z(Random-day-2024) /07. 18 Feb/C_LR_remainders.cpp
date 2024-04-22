//
// Created by Foysal Munsy on 18 / 02 / 2024
// Time: 19 : 11 : 29
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
#define mod 1000000007

void solve()
{
    ll n, m, p = 1;
    cin >> n >> m;
    deque<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        // random -_-
        // why why why????
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        a[i] %= N;
        p *= a[i];
    }
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        p %= N;
        ll bb = p % m;
        bb %= N;
        debug(p, m, bb);
        // cout << bb << nl;
        b[i] = bb;
        if (s[i] == 'L')
        {
            p /= a.front();
            p %= N;
            a.pop_front();
        }
        else
        {
            p /= a.back();
            p %= N;
            a.pop_back();
        }
    }

    for (ll i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << "\n";
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