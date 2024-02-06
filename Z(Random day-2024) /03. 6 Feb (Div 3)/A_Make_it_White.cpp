//
// Created by Foysal Munsy on 06 / 02 / 2024
// Time: 20 : 48 : 28
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0, sec = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            f = i + 1;
            break;
        }
    }
    // reverse(all(s));
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            sec = i + 1;
            // break;
        }
    }
    cout << (sec - f) + 1 << nl;
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