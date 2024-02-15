//
// Created by Foysal Munsy on 14 / 02 / 2024
// Time: 01 : 00 : 53
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
    ll n, k, curr = 0, maxi = 0, i = 0, j = 0;
    cin >> n >> k;
    vector<ll> in, out;
    for (ll i = 0, ai, bi; i < n; i++)
    {
        cin >> ai >> bi;
        if (ai - k < 0)
        {
            ai = 0;
        }
        else
        {
            ai = ai - k;
        }

        in.push_back(ai);
        out.push_back(bi);
    }
    sort(all(in));
    sort(all(out));
    debug(in, out);
    for (; i < n && j < n;)
    {
        if (in[i] <= out[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        debug(curr, maxi, in[i], out[j]);
        maxi = max(maxi, curr);
    }
    cout << maxi << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}