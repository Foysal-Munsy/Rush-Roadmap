//
// Created by Foysal Munsy on 02 / 04 / 2024
// Time: 02 : 02 : 44
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
// Function to check if a number is a binary decimal
bool isBinary(ll n)
{
    while (n != 0)
    {
        if (n % 10 > 1)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

void solve()
{
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    vector<ll> binaryDecimals;

    for (ll i = 0; i <= 1e5; ++i)
    {
        if (isBinary(i))
        {
            binaryDecimals.push_back(i);
        }
    }
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