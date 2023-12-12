//
// Created by Foysal Munsy on 11 / 12 / 2023
// Time: 22 : 18 : 16
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
    int n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << "NO\n";
        return;
    }
    if (n % 2 == 1 && k % 2 == 1)
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)
            cout << 1 << " ";
        cout << n - (k - 1) << '\n';
    }
    else if (n % 2 == 0)
    {
        if (k % 2 == 1 && n < 2 * k)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
                cout << (k % 2 == 0 ? 1 : 2) << " ";
            cout << n - (k - 1) * (k % 2 == 0 ? 1 : 2) << '\n';
        }
    }
    else
    {
        cout << "NO\n";
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