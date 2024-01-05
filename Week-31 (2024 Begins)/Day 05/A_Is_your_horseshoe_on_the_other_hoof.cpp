// Easy problem!! But I don't want to break my consistency :)
// Created by Foysal Munsy on 02 / 01 / 2024
// Time: 22 : 13 : 25
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

    long b;
    set<long> v;
    for (long i = 0; i < 4; i++)
    {

        cin >> b;
        v.insert(b);
    }
    int s = v.size();
    cout << (4 - s);
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