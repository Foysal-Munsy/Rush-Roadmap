//
// Created by Foysal Munsy on 25 / 11 / 2023
// Time: 21 : 03 : 23
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;

    long long a = -1, b = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            b = i;
        }
    }
    long long ans = (b - a);

    cout << (a == -1 or b == -1 or ans < 0 ? 0 : ans) << '\n';
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