// Task: https://cses.fi/problemset/task/2164
// not accepted
// Created by Foysal Munsy on 21 / 02 / 2024
// Time: 20 : 50 : 08
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
    deque<ll> dq, ans;
    for (ll i = 1; i <= n; i++)
        dq.push_back(i);
    // 1---7
    while (!dq.empty())
    {
        dq.push_back(dq.front()); // odd is added later
        debug(dq);

        dq.pop_front();
        debug(dq);

        ans.push_back(dq.front()); // every 2nd child which is removed
        dq.pop_front();
        debug(ans, dq);
    }

    cout << ans[k - 1] << '\n';
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
/*

Creative. Diligent. Skilled. Competitive programmer and Web developer with a proven track record
in learning new  data structure and algorithmic skills since studying Computer science
and Engineering. A collaborative, inspiring team member who communicates ideas effectively
and is always ready to learn new techniques. Proficient in various design and development tools.

*/