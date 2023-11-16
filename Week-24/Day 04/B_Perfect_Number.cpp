//
// Created by Foysal Munsy on 13 / 11 / 2023
// Time: 23 : 07 : 22
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 1e4;
long long sumOfDigits(long long num)
{
    long long sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
void solve()
{
    vector<long long> perfect;
    long long x = 19, cnt = 1;
    perfect.push_back(x);
    while (true)
    {
        if (cnt == N)
            break;
        x += 9;
        if (sumOfDigits(x) == 10)
        {
            perfect.push_back(x);
            cnt++;
        }
    }
    long long k;
    cin >> k;
    cout << perfect[k - 1] << '\n';
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
