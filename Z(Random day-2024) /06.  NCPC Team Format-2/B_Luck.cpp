//
// Created by Foysal Munsy on 14 / 02 / 2024
// Time: 22 : 25 : 48
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef priority_queue<ll, vector<ll>, greater<ll>> pvg;
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
    ll n, track = 0, tot = 0, dirt = 0;
    cin >> n;
    deque<int> a(n), dq;
    for (auto &i : a)
        cin >> i;

    for (ll i = 0; i < n; i++)
    {
        ll day = a[i] - track;
        dirt += day * dq.size();
        if (dirt >= 20)
        {
            dq.clear();
            tot++;
            dirt = 0;
        }
        track = a[i];
        dq.push_back(day);
    }

    cout << ++tot << '\n';
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