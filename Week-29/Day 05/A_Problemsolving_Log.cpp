//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 20 : 38 : 15
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
    map<char, int> track, mp;
    for (int i = 0; i < 26; i++)
    {
        track['A' + i] = i + 1;
    }
    for (auto &i : s)
    {
        mp[i]++;
    }
    debug(track);
    int cnt = 0;
    for (auto &i : mp)
    {
        if (i.second >= track[i.first])
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
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