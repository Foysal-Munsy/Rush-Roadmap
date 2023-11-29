//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 20 : 58 : 29
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
int minIncrease(int a, int b)
{
    int count = 0;
    while (true)
    {
        if (a % b == 0 || b == 1)
        {
            break;
        }
        a += 1;
        b -= 1;
        count++;
    }
    return count;
}
int minDecrease(int a, int b)
{
    int count = 0;
    while (true)
    {
        if (a % b == 0 || a == 1)
        {
            break;
        }
        a -= 1;
        b += 1;
        count++;
    }
    return count;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        if (a > b)
        {
            int count = minIncrease(a, b), count1 = minDecrease(a, b);

            cout << min(count, count1) << '\n';
        }
        else
        {
            int count = minIncrease(a, b);
            cout << count << '\n';
        }
    }
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