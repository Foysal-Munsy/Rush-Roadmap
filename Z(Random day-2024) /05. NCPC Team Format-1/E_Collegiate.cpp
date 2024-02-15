//
// Created by Foysal Munsy on 13 / 02 / 2024
// Time: 23 : 44 : 38
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
    ll s, p, m, n, y = 1e9 + 5;
    cin >> s >> p >> m >> n;
    vector<ll> t, sequ;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        if (y != x)
            t.push_back(x);
        y = x;
    }
    set<ll> st;
    ll i = 0, cnt = 1, cost = 0;
    while (i < t.size() - 1)
    {
        if (t[i + 1] == t[i] + 1)
        {
            cnt++;
        }
        else
        {
            sequ.push_back(cnt);
            cnt = 1;
        }
        i++;
    }
    sequ.push_back(cnt);
    for (auto &i : sequ)
    {
        cost += min(i * s, p);
    }
    cout << cost << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}