//
// Created by Foysal Munsy on 22 / 01 / 2024
// Time: 9 : 57 : 15
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
    bool found = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 3) != "WUB")
        {
            cout << s[i];
            found = true;
        }
        else
        {
            if (found)
                cout << " ";
            i += 2;
            found = false;
        }
    }
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