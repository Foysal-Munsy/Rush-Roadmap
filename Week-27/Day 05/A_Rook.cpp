//
// Created by Foysal Munsy on 05 / 12 / 2023
// Time: 20 : 52 : 14
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
    vector<string> ans;
    for (int i = 1; i <= 8; i++)
    {
        if (s[1] - '0' == i)
            continue;
        else
        {
            string str = s[0] + to_string(i);
            ans.push_back(str);
        }
    }
    for (auto ch = 'a'; ch <= 'h'; ch++)
    {
        if (ch == s[0])
            continue;
        else
        {
            ans.push_back(string(1, ch) + s[1]);
        }
    }
    for (auto &st : ans)
        cout << st << nl;
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