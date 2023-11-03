//
// Created by Foysal Munsy on 01 / 11 / 2023
// Time: 22 : 14 : 26
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
// const int N = 2e5 + 5;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    string s = "";
    if (n == 1 || n % 2 == 0)
    {
        s += "Bob";
    }
    else
    {
        if (isPrime(n) || n % 2 != 0)
        {
            s += "Alice";
        }
        else
        {
            s += "Bob";
        }
    }
    cout << s << nl;
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