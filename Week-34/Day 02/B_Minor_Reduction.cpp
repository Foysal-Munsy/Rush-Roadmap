//
// Created by Foysal Munsy on 20 / 01 / 2024
// Time: 20 : 08 : 50
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
    string S;
    cin >> S;
    int id = S.size() - 1;
    while (id >= 1 && (S[id - 1] - '0') + (S[id] - '0') < 10)
        id--;
    if (id == 0)
    {
        S[1] += S[0] - '0';
        cout << S.substr(1) << "\n";
    }
    else
    {
        int t = (S[id - 1] - '0') + (S[id] - '0');
        S[id - 1] = t / 10 + '0';
        S[id] = t % 10 + '0';
        cout << S << "\n";
    }
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