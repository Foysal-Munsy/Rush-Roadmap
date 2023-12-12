//
// Created by Foysal Munsy on 09 / 12 / 2023
// Time: 07 : 54 : 07
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
    string s;
    cin >> s;
    long long n = s.size(), qustn = 0;
    for (auto &c : s)
    {
        if (c == '?')
            qustn++;
    }
    if (n == 1)
    {
        if (s[0] == '?')
            s[0] = '1';
    }
    if (qustn == n)
    {
        while (n--)
            cout << 0;
        cout << '\n';
        return;
    }
    for (long long i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' and s[i + 1] == '?')
        {
            s[i + 1] = '0';
        }
        else if (s[i] == '?' and s[i + 1] == '0')
        {
            s[i] = '0';
        }
        else if (s[i] == '1' and s[i + 1] == '?')
        {
            s[i + 1] = '1';
        }
        else if (s[i] == '?' and s[i + 1] == '1')
        {
            s[i] = '1';
        }
    }
    // reverse
    for (long long i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0' and s[i + 1] == '?')
        {
            s[i + 1] = '0';
        }
        else if (s[i] == '?' and s[i + 1] == '0')
        {
            s[i] = '0';
        }
        else if (s[i] == '1' and s[i + 1] == '?')
        {
            s[i + 1] = '1';
        }
        else if (s[i] == '?' and s[i + 1] == '1')
        {
            s[i] = '1';
        }
    }
    cout << s << nl;
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