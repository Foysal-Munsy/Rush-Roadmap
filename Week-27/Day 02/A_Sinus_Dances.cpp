//
// Created by Foysal Munsy on 02 / 12 / 2023
// Time: 19 : 47 : 21
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

// An
void A(int n, int pos)
{
    cout << "sin(" << pos;

    if (pos < n)
    {
        if (pos & 1)
            cout << '-';
        else
            cout << '+';

        A(n, pos + 1);
    }

    cout << ')';
}

// Sn
void S(int n, int pos)
{
    if (pos < n)
    {
        cout << '(';
        S(n, pos + 1);
        cout << ')';
    }

    A(n + 1 - pos, 1);

    cout << "+" << pos;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int N;
    cin >> N;
    S(N, 1);
    return 0;
}