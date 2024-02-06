//
// Created by Foysal Munsy on 01 / 02 / 2024
// Time: 20 : 54 : 25
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
    int n, x, y;
    cin >> n >> x >> y;
    if (n == 2)
    {
        cout << x << " " << y << "\n";
        return;
    }

    int diff = y - x;
    vector<int> ans(n, INT_MAX);
    for (int i = 1; i <= 50; i++)
    {
        for (int diff = 1; diff <= 50; diff++)
        {
            vector<int> track;
            for (int j = 0; j < n; j++)
            {
                int s = i;
                track.push_back(s + diff * j);
            }
            if (find(track.begin(), track.end(), x) != track.end() && find(track.begin(), track.end(), y) != track.end())
            {
                if (ans.back() > track.back())
                    ans = track;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
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