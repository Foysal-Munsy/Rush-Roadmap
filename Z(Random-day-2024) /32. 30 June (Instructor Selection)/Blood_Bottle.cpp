//
// Created by Foysal Munsy on 30 / 06 / 2024
// Time: 22 : 34 : 28
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
    vector<int> track;
    int curr_len = 0;

    for (auto c : s)
    {
        if (c == '1')
        {
            curr_len++;
        }
        else
        {
            if (curr_len > 0)
            {
                track.push_back(curr_len);
                curr_len = 0;
            }
        }
    }

    if (curr_len > 0)
    {
        track.push_back(curr_len);
    }
    sort(rall(track));
    int sum = 0;
    for (int i = 0; i < track.size(); i += 2)
    {
        sum += track[i];
    }
    debug(track);

    cout << sum << '\n';
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