//
// Created by Foysal Munsy on 19 / 02 / 2024
// Time: 22 : 34 : 46
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
const int mx = 1e9 + 5;

vector<ll> pre, def;
vector<bool> visited(mx, false);
void solve()
{

    for (ll i = 1; i < mx; i += 2)
    {
        visited[i] = true;
        pre.push_back(i);
        def.push_back(i);
    }
    ll n, k;
    cin >> n >> k;
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