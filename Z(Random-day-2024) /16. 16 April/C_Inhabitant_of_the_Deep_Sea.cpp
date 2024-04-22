//
// Created by Foysal Munsy on 16 / 04 / 2024
// Time: 22 : 14 : 12
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

void solve()
{
    ll n, k, sum = 0, ans = 0;
    cin >> n >> k;
    deque<ll> dq;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        sum += x;
        dq.push_back(x);
    }

    // process
    if (sum == k || k > sum)
        ans = n;
    else
    {
        ll k1 = (k / 2) + (k % 2), k2 = k / 2;

        // first
        while (!dq.empty() && k1 >= dq.front())
        {
            k1 -= dq.front();
            dq.pop_front();
        }

        // last
        while (!dq.empty() && k2 >= dq.back())
        {
            k2 -= dq.back();
            dq.pop_back();
        }
        ans = n - dq.size();
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