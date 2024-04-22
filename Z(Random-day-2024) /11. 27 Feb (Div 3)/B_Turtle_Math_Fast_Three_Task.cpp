//
// Created by Foysal Munsy on 27 / 02 / 2024
// Time: 20 : 49 : 22
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
    ll n, s = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    ll sum = s;
    if (s % 3 == 0)
    {
        cout << 0 << nl;
    }
    else if ((s += 1) % 3 == 0 || sum == 1)
    {
        cout << 1 << nl;
    }
    else
    {
        s = sum;
        for (int i = 0; i < n; i++)
        {
            sum = s;
            if ((sum -= a[i]) % 3 == 0)
            {
                cout << 1 << nl;
                return;
            }
        }
        cout << 2 << nl;
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
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}