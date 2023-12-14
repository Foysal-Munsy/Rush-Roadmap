//
// Created by Foysal Munsy on 13 / 12 / 2023
// Time: 20 : 06 : 30
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
    int j = 1, choice = 0;

    if (n <= 5)
        choice = n;
    // else
    // {
    //     cout <<
    // }

    switch (choice)
    {
    case 1:
        cout << "Sheldon\n";
        break;
    case 2:
        cout << "Leonard\n";
        break;
    case 3:
        cout << "Penny\n";
        break;
    case 4:
        cout << "Rajesh\n";
        break;
    case 5:
        cout << "Howard\n";
        break;
    default:
        return;
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