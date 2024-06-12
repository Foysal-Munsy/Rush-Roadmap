//
// Created by Foysal Munsy on 12 / 06 / 2024
// Time: 22 : 12 : 08
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
    vector<ll> a(n), track(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            track[i + 1] = 1;
        track[i + 1] += track[i];
    }
    ll q, L, R;
    cin >> q;
    for (; q--;)
    {
        cin >> L >> R;
        if (track[R] - track[L - 1] > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
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