//
// Created by Foysal Munsy on 02 / 11 / 2023
// Time: 15 : 45 : 09
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const long long N = 2e5 + 5;

class Solution
{
public:
    long long countPrimes(long long n)
    {
        vector<bool> isPrime(n, true);
        long long count = 0;
        for (long long i = 2; i < n; ++i)
        {
            if (isPrime[i])
            {
                ++count;
                for (long long j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    Solution solution;
    long long n;
    cin >> n;
    long long result = solution.countPrimes(n);
    cout << result << nl;
    return 0;
}