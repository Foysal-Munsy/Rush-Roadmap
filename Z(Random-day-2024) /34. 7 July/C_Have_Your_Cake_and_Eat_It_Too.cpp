//
// Created by Foysal Munsy on 07 / 07 / 2024
// Time: 22 : 27 : 29
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
    vector<ll> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    ll sum = accumulate(all(a), 0ll);
    ll piece = ceil(sum / 3.0);
    // check
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= piece)
            a[i] = 0;
        if (b[i] >= piece)
            b[i] = 0;
        if (c[i] >= piece)
            c[i] = 0;
    }
    debug(a, b, c);
    vector<ll> aa, bb, cc;
    for (int i = 0; i < n;)
    {
        if (a[i] == 0)
        {
            aa.push_back(0);
            i++;
        }
        if (a[i] != 0 && a[i + 1] == 0)
        {
            //
            aa.push_back(-1);
            aa.push_back(0);
            i += 2;
        }
        else
        {
            ll asum = 0;
            while (asum < piece)
            {
                asum += a[i];
                i++;
                if (a[i] == 0)
                {
                    break;
                }
            }
        }
    }
    debug(aa);
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