//
// Created by Foysal Munsy on 27 / 02 / 2024
// Time: 22 : 27 : 01
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

int calculateLogBase(int n, int base)
{
    double epsilon = 1e-9;
    double result = n;
    int count = 0;

    while (result > base + epsilon)
    {
        result /= base;
        count++;
    }

    return count + 2;
}
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    set<ll> s;
    for (int i = 0; i <= calculateLogBase(n, a); i++)
    {
        for (int j = 0; j <= calculateLogBase(n, b); j++)
        {
            int x = pow(a, i), y = pow(b, j);
            if (n >= (x * y) && n % (x * y) == 0)
            {
                s.insert(x * y);
            }
        }
    }
    cout << s.size() << nl;
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