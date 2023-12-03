//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 07 : 25 : 14
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

int f91(int n)
{
    if (n >= 101)
        return n - 10;
    if (n <= 100)
        return f91(f91(n + 11));
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int n;
    while (cin >> n, n)
    {
        cout << "f91(" << n << ") = ";
        if (n >= 101)
            cout << n - 10 << '\n';
        else
            cout << "91" << '\n';
    }
    return 0;
}
