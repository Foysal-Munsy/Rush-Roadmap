//
// Created by Foysal Munsy on 20 / 02 / 2024
// Time: 17 : 32 : 52
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
    vector<ll> a(n), b(n), track(n), last;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
        if (mp.count(a[i]) == 0)
            mp[a[i]] = i;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(b[i]) > 0)
        {
            track[i] = mp[b[i]];
        }
        else
        {
            track[i] = -1;
        }
    }
    ll len = 1, t = 1e9;

    for (int i = 0; i < track.size(); i++)
    {
        if (track[i] != -1)
        {
            last.push_back(track[i]);
        }
    }
    // debug(last);
    // cout << len << nl;
    ll ii = 0;
    if (!last.empty())
    {

        ll cnt = 1;
        for (int i = 0; i < last.size() - 1; i++)
        {
            // cout << last[i] << " ";
            if (last[i] < last[i + 1])
                cnt++;
            else
                cnt--;
        }
        // cout << nl;
        // cout << cnt << nl;
        ii = last.size() - cnt;
        if (cnt == n)
            cout << 0 << nl;
        else
            cout << n - ii << nl;
        // cout << last.size() << " " << cnt << nl;
    }
    else
    {
        // 0 hobe
        cout << n << nl;
    }

    debug(track, last);
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
        cout << "Case " << cs << ": ";
        solve();
        cs++;
    }
    return 0;
}