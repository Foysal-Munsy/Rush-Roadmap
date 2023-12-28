//
// Created by Foysal Munsy on 28 / 12 / 2023
// Time: 21 : 52 : 12
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
    vector<ll> a(n + 1), pref(n);
    ll oddSum = 0, evenSum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    unordered_map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += a[i];
        }
        else
        {
            oddSum += a[i];
        }
        ll curr = oddSum - evenSum;
        if (curr == 0 || mp.find(curr) != mp.end())
        {
            cout << "YES\n";
            return;
        }
        else
        {
            mp[curr] = i;
        }
    }
    cout << "NO\n";
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