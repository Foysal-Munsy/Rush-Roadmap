//
// Created by Foysal Munsy on 11 / 07 / 2024
// Time: 21 : 19 : 44
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
    ll n, k;
    cin >> n >> k;
    deque<ll> a;
    for (ll i = 0, x; i < k; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(all(a));
    ll cnt = 0;
    while (true)
    {
        if (a.size() == 1)
            break;
        if (a.front() == 1)
        {
            a.back() += 1;
            a.pop_front();
            cnt++;
        }
        else if (a.front() == 2)
        {
            cnt += 3;

            a.back() += a.front();
            a.pop_front();
        }
        else
        {
            ll diff = 2 + abs(a.front() - 2) * 2;

            cnt += diff;
            cnt += 1;
            a.back() += a.front();
            a.pop_front();
        }
    }
    debug(cnt, a);

    cout << cnt << nl;
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