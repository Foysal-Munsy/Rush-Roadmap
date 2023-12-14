//
// Created by Foysal Munsy on 14 / 12 / 2023
// Time: 21 : 16 : 41
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

ll n;
vector<pair<ll, ll>> countSubarrays(vector<ll> arr)
{
    vector<pair<ll, ll>> result;
    ll i = 0;
    while (i < n)
    {
        ll count = 1;
        while (i + 1 < n && arr[i] == arr[i + 1])
        {
            i++;
            count++;
        }
        result.push_back({arr[i], count});
        i++;
    }
    return result;
}

void solve()
{
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    vector<pair<ll, ll>> aa = countSubarrays(a), bb = countSubarrays(b);

    map<ll, pair<ll, ll>> counts;
    for (auto &p : aa)
        counts[p.first].first = max(counts[p.first].first, p.second);
    for (auto &p : bb)
        counts[p.first].second += p.second;

    ll maxCount = 0;
    for (auto &p : counts)
    {
        maxCount = max(maxCount, p.second.first + p.second.second);
    }

    cout << maxCount << '\n';
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