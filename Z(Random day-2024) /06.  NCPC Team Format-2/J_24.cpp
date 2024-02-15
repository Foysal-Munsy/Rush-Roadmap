//
// Created by Foysal Munsy on 14 / 02 / 2024
// Time: 20 : 07 : 00
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
    string s;
    cin >> s;
    ll vow = 0, cons = 0, cnt = 0;
    for (auto c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            vow++;
        else
            cons++;
        debug(vow, cons);
        HERE;
        if (vow > 0 && cons > 0)
        {
            cnt++;
            vow = 0, cons = 0;
        }
    }
    // cout << vow << " " << cons << '\n';
    // cout << min(vow, cons) << '\n';
    cout << cnt << '\n';
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