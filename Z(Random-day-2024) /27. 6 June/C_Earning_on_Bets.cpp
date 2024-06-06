//
// Created by Foysal Munsy on 06 / 06 / 2024
// Time: 22 : 05 : 31
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
    ll n;
    cin >> n;
    vector<ll> k(n), track(n), ans;
    for (auto &i : k)
        cin >> i;
    ll target = 1, sum = 0;
    for (auto val : k)
    {
        ll comm = gcd(target, val);
        comm = val / comm;
        target *= comm;
    }
    debug(target);
    for (auto i : k)
    {
        sum += target / i;
        ans.push_back(target / i);
    }

    debug(sum);
    if (sum >= target)
    {
        cout << "-1\n";
    }
    else
    {
        // for checking
        // for (int i = 0; i < n; i++)
        // {
        //     ans[i] = k[i] * track[i];
        // }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
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