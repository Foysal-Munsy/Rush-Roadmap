//
// Created by Foysal Munsy on 02 / 11 / 2023
// Time: 13 : 18 : 50
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
const int N = 2e5 + 5;

void sieve(size_t n)
{
    vector<size_t> color(n + 3, 0);
    color[0] = color[1] = 0;
    for (size_t i = 2; i <= n + 1; ++i)
    {
        if (color[i] == 0)
        {
            color[i] = 1;
            for (size_t j = i * i; j <= n + 1; j += i)
            {
                if (color[j] == 0)
                {
                    color[j] = 2;
                }
            }
        }
    }

    size_t mx = *max_element(color.begin(), color.end());
    cout << mx << nl;
    for (size_t i = 2; i <= n + 1; ++i)
        cout << color[i] << " ";
    cout << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    size_t n;
    cin >> n;
    sieve(n);

    return 0;
}