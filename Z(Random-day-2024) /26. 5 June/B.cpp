//
// Created by Foysal Munsy on 05 / 06 / 2024
// Time: 21 : 47 : 43
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
    vector<ll> a(n), reg, ek, bish, track(3);
    for (auto &i : a)
        cin >> i;

    // base case
    if (n == 2)
    {
        int l = abs(a[0] - a[1]);
        int r = abs(a[0] - 1);
        int se = abs(a[0] - k);
        int y = max(l, max(r, se));
        int xx = abs(a[1] - 1), yy = abs(a[1] - k);
        int z = max(xx, yy);
        cout << max(y, z) << nl;
        return;
    }
    if (n == 3)
    {
        int l = abs(a[0] - a[1]) + abs(a[1] - a[2]);
        int r = abs(a[0] - 1) + abs(1 - a[2]);
        int se = abs(a[0] - k) + abs(k - a[2]);
        cout << max(l, max(r, se)) << '\n';
        // cout << l << " " << r << " " << se << nl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        reg.push_back(abs(a[i] - a[i + 1]));
    }
    for (int i = 0; i < n; i++)
    {

        ek.push_back(abs(1 - a[i]));
        bish.push_back(abs(a[i] - k));
    }
    ll mx_rg = *max_element(all(reg)), mx_ek = *max_element(all(ek)), mx_bish = *max_element(all(bish));
    track[0] = mx_rg, track[1] = mx_ek, track[2] = mx_bish;
    ll tt = max_element(track.begin(), track.end()) - track.begin();
    if (tt == 0)
    {
        //
        tt = max_element(reg.begin(), reg.end()) - reg.begin();
    }
    else if (tt == 1)
    {
        //
        tt = max_element(ek.begin(), ek.end()) - ek.begin();
    }
    else
    {
        //
        tt = max_element(bish.begin(), bish.end()) - bish.begin();
    }

    ll sum = 0, an = 0, bn = 0;
    for (int i = 0; i < reg.size(); i++)
    {
        if (i == tt)
        {
            if (tt > 0 && tt < n - 1) // check if tt-1 and tt+1 are valid indices
            {
                an = max(ek[tt - 1] + ek[tt + 1], bish[tt - 1] + bish[tt + 1]);
            }
        }
        if (i == (tt - 1) || i == tt)
            continue;
        else
            sum += reg[i];
    }
    sum += an;
    cout << sum << nl;
    debug(reg, ek, bish, an);
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