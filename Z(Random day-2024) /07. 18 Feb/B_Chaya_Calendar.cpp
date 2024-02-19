//
// Created by Foysal Munsy on 18 / 02 / 2024
// Time: 18 : 46 : 57
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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    ll curr = a[0];
    for (ll i = 1, period = a[i], cnt; i < n; i++)
    {
        if (a[i] <= curr)
        {
            cnt = 0;
            for (; period <= curr;)
            {
                period = a[i] * cnt;
                cnt++;
            }
            curr = period;
        }
        else
        {
            curr = a[i];
        }
    }
    cout << curr << nl;
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