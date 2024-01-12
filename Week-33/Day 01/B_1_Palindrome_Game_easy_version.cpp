//
// Created by Foysal Munsy on 12 / 01 / 2024
// Time: 21 : 55 : 58
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
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (char &c : s)
    {
        if (c == '0')
            zero++;
        else
            one++;
    }

    cout << ((zero == 1 || !(zero & 1)) ? "BOB\n" : "ALICE\n");
    // draw is not possible, let's submit...
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