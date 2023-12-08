//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 20 : 37 : 35
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
bool findSubstrings(string &s)
{
    return s.find("01") != std::string::npos || s.find("10") != std::string::npos;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zero = count(all(s), '0'), one = n - zero;
    if (one == n)
    {
        cout << "NO\n";
        return;
    }
    if (zero == n or zero > one)
    {
        cout << "YES\n";
        return;
    }
    bool found = findSubstrings(s);
    cout << (found ? "YES" : "NO") << '\n';
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