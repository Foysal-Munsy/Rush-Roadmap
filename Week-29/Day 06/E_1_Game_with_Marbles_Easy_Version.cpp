//
// Created by Foysal Munsy on 20 / 12 / 2023
// Time: 17 : 14 : 08
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
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
    vector<ll> a(n), b(n), diff(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        diff[i] = abs(a[i] - b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int alice = 0; alice < n; alice++)
        {
            int j = alice;
            //
            if (a[j] != -1 and b[j] != -1)
            {
                //
            }
        }
        for (int bob = 0; bob < n; bob++)
        {
            int j = bob;
            //
            if (a[j] != -1 and b[j] != -1)
            {
                //
            }
        }
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