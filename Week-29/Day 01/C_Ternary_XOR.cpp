//
// Created by Foysal Munsy on 15 / 12 / 2023
// Time: 08 : 17 : 38
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a(n, '0'), b(n, '0');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a[i] = '1';
            b[i] = '0';
            for (int j = i + 1; j < n; j++)
            {
                b[j] = s[j];
            }
            break;
        }
        else
        {
            a[i] = b[i] = '0' + (s[i] - '0') / 2;
        }
    }
    cout << a << '\n'
         << b << '\n';
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