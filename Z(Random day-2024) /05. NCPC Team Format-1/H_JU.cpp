//
// Created by Foysal Munsy on 13 / 02 / 2024
// Time: 21 : 21 : 23
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
    string st;
    cin >> st;
    sort(all(st));

    string ans = "";
    for (auto c : st)
    {
        if (c == 'W')
            ans += 'O';

        else
            ans += c;
    }
    ans += 'W';
    int cnt = 0;
    for (auto c : ans)
    {
        if (c == 'H')
            cnt++;
    }
    if (cnt > 1)
    {
        int idx = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == 'H')
            {
                idx = i;
                break;
            }
        }
        for (int i = idx + 1; i < ans.size(); i++)
        {
            if (ans[i] == 'H')
            {
                ans[i] = 'A';
            }
        }
    }
    cout << ans << '\n';
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