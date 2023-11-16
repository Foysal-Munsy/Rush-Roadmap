// Is O(n^2) acceptable?
// Created by Foysal Munsy on 11 / 11 / 2023
// Time: 21 : 17 : 35
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
    int n;
    cin >> n;
    vector<int> tri_num;
    for (int k = 1; k < n; ++k)
    {
        int t = k * (k + 1) / 2;
        if (t > n)
            break;
        tri_num.push_back(t);
    }
    bool found = false;

    for (int i = 0; i < tri_num.size(); ++i)
    {
        for (int j = i; j < tri_num.size(); ++j)
        {
            if (tri_num[i] + tri_num[j] == n)
            {
                found = true;
                break;
            }
            else if (tri_num[i] + tri_num[j] > n)
                break;
        }
        if (found)
            break;
    }
    cout << (found ? "YES\n" : "NO\n");
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