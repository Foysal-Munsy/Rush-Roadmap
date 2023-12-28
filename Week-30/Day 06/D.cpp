//
// Created by Foysal Munsy on 27 / 12 / 2023
// Time: 21 : 08 : 29
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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<char> track(n, 'P');

    for (int i = 0; i < n; i++)
    {
        if (track[i] == 'P' && s[i] == 'R')
            cnt++;
    }
    int need = (n / 2) + 1;
    if (cnt <= need)
    {
        int cnt__ = need - cnt;
        for (int i = n - 1; i >= 0 and cnt__ > 0; i--)
        {
            if (s[i] == 'P' or s[i] == 'S')
            {
                track[i] = (s[i] == 'P' ? 'S' : 'R');
                cnt__--;
            }
        }
    }

    for (auto &ch : track)
    {
        cout << ch;
    }
    cout << '\n';
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