//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 07 : 29 : 21
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

long long Reverse(long long x)
{
    long newX(0);

    while (x)
    {
        newX *= 10;
        newX += x % 10;
        x /= 10;
    }

    return newX;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t;
    cin >> t;

    for (; t--;)
    {
        long long number;
        cin >> number;

        long long reverseNumber = Reverse(number);

        int count(0);
        while (reverseNumber != number)
        {
            number += reverseNumber;
            reverseNumber = Reverse(number);
            ++count;
        }
        cout << count << " " << number << '\n';
    }
    return 0;
}