//
// Created by Foysal Munsy on 29 / 02 / 2024
// Time: 20 : 09 : 39
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
    ll a, b, goal;
    cin >> a >> b >> goal;
    set<ll> st;
    for (ll i = 0; i <= goal; i++)
    {
        if (pow(a, i) > goal)
            break;
        for (ll j = 0; j <= goal; j++)
        {
            ll x = pow(a, i), y = pow(b, j), multi = x * y;

            if (multi > goal || y > goal)
                break;
            else
            {
                if (goal % multi == 0)
                    st.insert(multi);
            }
        }
    }
    cout << st.size() << '\n';
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