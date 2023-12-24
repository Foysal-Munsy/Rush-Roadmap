//
// Created by Foysal Munsy on 24 / 12 / 2023
// Time: 09 : 36 : 04
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
const int N = 1e18;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll k = 2;
    for (; true;)
    {
        vector<ll> rem;
        for (int i = 0; i < n; i++)
        {
            rem.push_back((a[i] % k) % k);
        }
        sort(all(rem));
        auto last = unique(all(rem));
        rem.erase(last, rem.end());
        if (rem.size() == 2)
        {
            rem.clear();
            break;
        }
        k *= 2;
    }
    cout << k << '\n';
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