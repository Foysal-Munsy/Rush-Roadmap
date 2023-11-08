//
// Created by Foysal Munsy on 05 / 11 / 2023
// Time: 21 : 46 : 32
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans[13], A, track(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    A = v;
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 0; j < n; j++)
            track[j] = mp[v[j]];

        mp.clear();

        for (int k = 0; k < n; k++)
            mp[track[k]]++;

        ans[i] = track;
        v = track;
    }

    size_t q;
    cin >> q;
    for (; q--;)
    {
        size_t x, k;
        cin >> x >> k;

        if (k == 0)
            cout << A[x - 1] << nl;
        else if (k > 11)
            cout << ans[12][x - 1] << nl;
        else
            cout << ans[k][x - 1] << nl;
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