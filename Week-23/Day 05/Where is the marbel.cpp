//
// Created by Foysal Munsy on 07 / 11 / 2023
// Time: 11 : 48 : 44
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
    int n, q, cs = 1;
    while (cin >> n >> q and (n != 0 and q != 0))
    {
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        cout << "CASE# " << cs++ << ":\n";
        for (int i = 0; i < q; ++i)
        {
            int x;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            int ans = it - a.begin();
            ans++;
            if (it != a.end() and *it == x)
                cout << x << " found at " << ans << '\n';
            else
                cout << x << " not found" << '\n';
            debug(ans, a);
        }
    }
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