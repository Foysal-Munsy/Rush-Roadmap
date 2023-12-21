//
// Created by Foysal Munsy on 21 / 12 / 2023
// Time: 20 : 30 : 53
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
    int n;
    cin >> n;
    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    h[0] = 0;
    int energy = 0, cost = h[1], gives = 0;
    for (int i = 1; i < n; i++)
    {
        gives = h[i] - h[i + 1];
        energy += gives;
        if (energy < 0)
        {
            cost -= energy;
            energy = 0;
        }
    }
    cout << cost << '\n';
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