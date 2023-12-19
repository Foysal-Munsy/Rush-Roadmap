//
// Created by Foysal Munsy on 18 / 12 / 2023
// Time: 21 : 00 : 39
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
void solve()
{
    string st;
    cin >> st;
    ll n = st.size();
    ll cnt_1 = count(all(st), '1'), cnt_0 = n - cnt_1;
    ll t = 0;
    for (auto ch : st)
    {
        if (ch == '0')
            cnt_1--;
        else if (ch == '1')
            cnt_0--;
        if (cnt_0 < 0 or cnt_1 < 0)
            break;
        else
            t++;
    }
    cout << n - t << nl;
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