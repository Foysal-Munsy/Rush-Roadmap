//
// Created by Foysal Munsy on 31 / 10 / 2023
// Time: 21 : 53 : 16
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

bool isPowerOfTwo(int n)
{
    return (n and !(n & (n - 1)));
}
// if (j == 0)
    // {
    //     s += '1';
    //     q = dq.front();
    //     dq.pop_front();
    //     for (size_t i = 0; i < dq.size(); i++)
    //     {
    //         if (dq[0] > dq[i])
    //         {
    //             s += '0';
    //         }
    //         else
    //         {
    //             if (dq[i] <= k)
    //                 s += '1';
    //             else
    //                 s += '0';
    //         }
    //     }
    //     cout << s << nl;
    //     return;
    // }

    /*for (size_t i = 0; i < dq.size(); i++)
    {
        if (dq[0] > dq[i])
        {
            s += '0';
        }
        else
        {
            if (dq[i] <= k)
                s += '1';
            else
                s += '0';
        }
    }*/
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool okay = true;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] and !isPowerOfTwo(i + 1))
        {
            okay = false;
            goto last;
        }
    }
last:
    cout << (okay ? "YES\n" : "NO\n");
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