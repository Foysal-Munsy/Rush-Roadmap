//
// Created by Foysal Munsy on 12 / 06 / 2024
// Time: 22 : 29 : 04
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
    ll n, h;
    cin >> n >> h;
    deque<ll> d;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        d.push_back(x);
    }
    ll mx = *max_element(all(d));
    --mx;
    ll sum = mx * (mx + 1) / 2;
    ll ans = h - sum;
    if (ans >= 1)
    {
        cout << "Hablu\n";
    }
    else
    {
        cout << "Dablu\n";
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
    // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}