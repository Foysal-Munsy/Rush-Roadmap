//
// Created by Foysal Munsy on 22 / 01 / 2024
// Time: 8 : 53 : 48
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
    int x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;
    string s1 = to_string(x1) + string(p1, '0');
    string s2 = to_string(x2) + string(p2, '0');
    if (s1.length() < s2.length())
    {
        cout << "<\n";
    }
    else if (s1.length() > s2.length())
    {
        cout << ">\n";
    }
    else
    {
        if (s1 < s2)
        {
            cout << "<\n";
        }
        else if (s1 > s2)
        {
            cout << ">\n";
        }
        else
        {
            cout << "=\n";
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