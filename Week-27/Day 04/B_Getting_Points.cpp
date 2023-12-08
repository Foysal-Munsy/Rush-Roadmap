//
// Created by Foysal Munsy on 04 / 12 / 2023
// Time: 07 : 32 : 11
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
    long long day, point, lesson, task;
    cin >> day >> point >> lesson >> task;

    // observation operation
    long long total_task = ((day + 6) / 7);
    auto is_this = [lesson, total_task, task](long long k)
    {
        return k * lesson + min(2 * k, total_task) * task;
    };

    // binary search
    long long low = 0, high = day, ans = day;
    while (high - low > 1)
    {
        long long mid = low + (high - low) / 2;
        if (is_this(mid) >= point)
        {
            ans = mid;
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout << day - ans << '\n';
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