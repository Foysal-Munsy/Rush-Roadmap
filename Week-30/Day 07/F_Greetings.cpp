//
// Created by Foysal Munsy on 28 / 12 / 2023
// Time: 23 : 02 : 10
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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[i] = x;
        b[i] = y;
    }
    ll mn = *min_element(all(b)), cnt = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= mn)
            cnt++;
    }
    cout << cnt << nl;
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