//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 21 : 28 : 28
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

ll n, p, les, t;
bool is_valid(ll x)
{
    ll avl_task = (n + 6) / 7; //+ 1;
    ll v = x * les + min(avl_task, x) * t;
    if (avl_task > x)
    {
        v += min(avl_task - x, x) * t;
    }
    return v >= p;
}
void solve()
{

    cin >> n >> p >> les >> t;

    // ll task = (n - 1) / 7 + 1, lagbe = task - 1; // ei task gulo korte lagbe eto din
    // // amake earn kora lagbe p
    // // need to calculate min days to do this, then max rest day ans --> n-minDay

    // // n>=8

    // binary search
    ll ans = -1, lo = 1, hi = n;
    while (hi >= lo)
    {

        // assume mid = minimum day that i need to work
        ll mid = lo + (hi - lo) / 2;
        if (is_valid(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << (ans == -1 ? 0 : (n - ans)) << nl;
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