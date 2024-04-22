//
// Created by Foysal Munsy on 18 / 02 / 2024
// Time: 18 : 07 : 31
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
    int n, j = 0, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '*' && s[i + 1] == '*')
        {
            j = i;
            break;
        }
    }
    if (j == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '@')
            {
                cnt++;
            }
        }
    }
    else
        for (int i = 0; i < j; i++)
        {
            if (s[i] == '@')
            {
                cnt++;
            }
        }
    cout << cnt << '\n';
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