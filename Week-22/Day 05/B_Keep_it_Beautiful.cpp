//
// Created by Foysal Munsy on 31 / 10 / 2023
// Time: 22 : 40 : 43
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
    ll n;
    cin >> n;
    deque<ll> dq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        dq.push_back(x);
    }
    // string s;
    vector<ll> ans;
    ll a = dq[0];
    for (ll i = 0; i < n; i++)
    {
        if (dq[i] > dq[i + 1])
        {
            break;
        }
        else
        {
            dq.pop_front();
            // s += '1';
            // ans[i]=1;
            ans.push_back(1);
        }
    }

    dq.pop_front();
    ll b = dq[0];
    // s += '1';
    ans.push_back(1);
    if (b > a)
        b = a;
    ll m = dq.size();
    for (ll i = 0; i < m; i++)
    {
        if (dq[i] >= b and dq[i] <= a)
        {
            // s += '1';
            ans.push_back(1);
        }
        else
        {
            // s += '0';
            ans.push_back(0);
        }
    }
    // cout << s << nl;
    for (auto i : ans)
        cout << i;
    cout << nl;
    // debug(dq, s);
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