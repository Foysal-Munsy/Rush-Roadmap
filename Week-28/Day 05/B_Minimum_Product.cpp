//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 12 : 12 : 33
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    long long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    long long ans = 1e18;
    for (int i = 0; i < 2; ++i)
    {
        int da = min(n, a - x);
        int db = min(n - da, b - y);
        ans = min(ans, (a - da) * 1ll * (b - db));
        swap(a, b);
        swap(x, y);
    }
    cout << ans << '\n';
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