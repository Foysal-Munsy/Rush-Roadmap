//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 16 : 01 : 06
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

void solve()
{
    long long n;
    cin >> n;
    deque<long long> dq;
    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        dq.push_back(x);
    }
    auto min_pos = min_element(dq.begin(), dq.end()) - dq.begin(); // track minimum element position
    debug(min_pos);
    for (int i = min_pos + 1; i < n; ++i)
    {

        if (dq[i] < dq[i - 1]) // If the part of the deque after the position of the first minimum is not sorted
        {
            debug(dq[i], dq[i - 1]);
            cout << -1 << nl;
            return;
        }
    }
    cout << min_pos << nl;
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