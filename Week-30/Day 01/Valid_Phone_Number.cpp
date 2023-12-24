//
// Created by Foysal Munsy on 22 / 12 / 2023
// Time: 20 : 16 : 55
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
    string s;
    cin >> s;
    ll cnt_pls = 0;
    for (auto c : s)
    {
        if (c == '+')
            cnt_pls++;
    }
    if (s.size() < 14 or cnt_pls > 1 or s.size() > 14)
    {
        cout << "NO\n";
    }
    else
    {
        if (s[0] == '+' and s[1] == '8' and s[2] == '8' and s[3] == '0' and s[4] == '1')
        {
            if (s[5] == '3' or s[5] == '7' or s[5] == '4' or s[5] == '9' or s[5] == '5' or s[5] == '6' or s[5] == '8')
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
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