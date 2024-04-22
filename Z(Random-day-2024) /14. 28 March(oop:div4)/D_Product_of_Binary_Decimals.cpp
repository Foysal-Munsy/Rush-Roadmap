//
// Created by Foysal Munsy on 28 / 03 / 2024
// Time: 21 : 58 : 10
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
    ll n;
    cin >> n;
    string s = "";
    s = to_string(n);
    bool ok = true;
    for (char c : s)
    {
        if (c == '1' || c == '0')
            continue;
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "YES\n";
        return;
    }

    // else
    /*
    10111110111101  - 12221
    */
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