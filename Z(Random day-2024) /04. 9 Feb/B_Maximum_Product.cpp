//
// Created by Foysal Munsy on 09 / 02 / 2024
// Time: 21 : 58 : 28
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
    ll mul = 1, cnt = 0;
    deque<ll> pos, neg;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0)
            pos.push_back(x);
        else
            neg.push_back(x);
        if (n == 5)
            mul *= x;
    }
    sort(all(pos));
    sort(all(neg));
    if (neg.size() < 2)
    {
        mul = 1;
        for (int i = pos.size() - 1; i >= 0; i--, cnt++)
        {
            if (cnt == 5)
                break;
            else
                mul *= pos[i];
            debug(pos[i]);
        }
    }
    else
    {
        mul = 1;
        if (pos.size() < 2)
        {
            for (int i = 0; i < 4; i++)
                mul *= neg[i];
            mul *= pos[0];
        }
        else
        {
            mul = 1, cnt = 0;
            reverse(all(pos));
            while (true)
            {
                if (cnt == 2)
                    break;
                ll mul1 = 1, mul2 = 1;
                if (neg.empty())
                    goto poss;
                if (pos.empty())
                    goto negg;
            negg:
                if (!neg.empty())
                    mul1 = neg[0] * neg[1];
            poss:
                if (!pos.empty())
                    mul2 = pos[0] * pos[1];
                if (mul1 <= mul2)
                {
                    mul *= mul2;
                    pos.pop_front();
                    pos.pop_front();
                }
                else
                {
                    mul *= mul1;
                    neg.pop_front();
                    neg.pop_front();
                }
                cnt++;
            }
                }
    }
    cout << mul << nl;
    debug(pos, neg);
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