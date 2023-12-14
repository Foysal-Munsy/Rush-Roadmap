//
// Created by Foysal Munsy on 13 / 12 / 2023
// Time: 21 : 07 : 48
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> vs(n, "IDK");
    int j = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            vs[i] = "NO";
            j = min(j, i);
        }
    }
    for (int i = j; i < n; i++)
    {
        if (s[i] == '1')
            vs[i] = "YES";
    }
    if (s[n - 1] == '1')
        vs[n - 1] = "YES";
    for (auto &st : vs)
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