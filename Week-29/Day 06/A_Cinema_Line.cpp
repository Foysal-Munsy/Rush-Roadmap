//
// Created by Foysal Munsy on 20 / 12 / 2023
// Time: 20 : 41 : 03
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
    int n, tk_25 = 0, tk_50 = 0;
    cin >> n;
    vector<int> a(n);
    bool flag = true;
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == 25)
            tk_25++;
        else if (a[i] == 50)
        {
            if (tk_25 > 0)
            {
                tk_25--;
                tk_50++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (tk_25 > 0 and tk_50 > 0)
            {
                tk_25--;
                tk_50--;
            }
            else if (tk_25 > 2)
            {
                tk_25 -= 3;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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