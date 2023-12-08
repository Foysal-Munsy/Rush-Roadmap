//
// Created by Foysal Munsy on 05 / 12 / 2023
// Time: 21 : 46 : 59
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
    string s;
    cin >> s;
    string temp = "";
    for (char ch : s)
    {
        if (ch == 'b')
        {
            auto idx = temp.find_last_of("abcdefghijklmnopqrstuvwxyz");
            if (idx != string::npos)
                temp.erase(idx, 1);
        }
        else if (ch == 'B')
        {
            auto idx = temp.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
            if (idx != string::npos)
                temp.erase(idx, 1);
        }
        else
        {
            temp += ch;
        }
    }
    cout << temp << nl;
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