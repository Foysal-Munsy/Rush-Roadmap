//
// Created by Foysal Munsy on 01 / 11 / 2023
// Time: 20 : 49 : 00
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
ll max_sub(vector<ll> &arr, ll n, ll k)
{
    ll count = 0;
    ll ek = 0;
    for (size_t i = 0; i < k; i++)
        if (arr[i] == 1)
        {
            ek++;
            // cout << i << " first" << nl;
        }

    if (ek > 0)
        count++;

    for (size_t i = k; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ek++;
        }
        if (arr[i - k] == 1)
        {
            ek--;
        }

        if (ek > 0)
            count++;
    }

    return count;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), track(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        track[i] = a[i] % 2;
    }

    // ll count = 0, total = 0;
    ll count = max_sub(track, n, k);
    cout << count << nl;
    // max_sub(track, n, k);

    debug(track);
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