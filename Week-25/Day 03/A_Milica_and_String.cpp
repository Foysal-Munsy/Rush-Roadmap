//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 20 : 42 : 34
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int b_cnt = count(s.begin(), s.end(), 'B');
    if (b_cnt == k)
    {
        cout << 0 << '\n';
        return;
    }
    int track = 0;
    if (b_cnt < k) // B lagbe
    {
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'A')
            {

                track = i + 1;
                // s[i] = 'B';
                ++b_cnt;
            }
            if (b_cnt == k)
                break;
        }
        cout << 1 << nl;
        cout << track << " B" << nl;
    }
    else // A lagbe
    {
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'B')
            {

                track = i + 1;
                --b_cnt;
            }
            if (b_cnt == k)
                break;
        }
        cout << 1 << nl;
        cout << track << " A" << nl;
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