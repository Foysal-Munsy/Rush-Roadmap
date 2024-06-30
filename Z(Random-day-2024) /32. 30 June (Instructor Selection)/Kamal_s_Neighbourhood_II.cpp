//
// Created by Foysal Munsy on 30 / 06 / 2024
// Time: 21 : 10 : 30
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
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> vp;
    for (int i = 0, a, b; i < e; i++)
    {
        cin >> a >> b;
        vp.push_back({a, b});
    }
    int k;
    cin >> k;
    int cnt = 0;
    int house = k;
    int i = 0;
    while (i < e)
    {
        for (auto &[first, second] : vp)
        {
            if (first == house && second != k)
            {
                cnt++;
                first = -1;
                house = second;
                second = -1;
            }
        }
        i++;
    }
    debug(vp, visited);
    cout << cnt << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}