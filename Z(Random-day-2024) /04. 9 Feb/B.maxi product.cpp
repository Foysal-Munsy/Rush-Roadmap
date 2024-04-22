//
// Created by Foysal Munsy on 09 / 02 / 2024
// Time: 23 : 02 : 35
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
bool compare(ll a, ll b)
{
    return abs(a) > abs(b);
}

void sort_by_absolute(deque<ll> &numbers)
{
    sort(numbers.begin(), numbers.end(), compare);
}
void solve()
{
    ll n;
    cin >> n;
    deque<ll> dq;
    ll neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        dq.push_back(x);
        if (x < 0)
            neg++;
        else
            pos++;
    }
    sort(rall(dq));
    debug(dq);
    ll mul = 1;
    if (neg == n)
    {
        mul = dq[0] * dq[1] * dq[2] * dq[3] * dq[4];
    }
    else if (pos == n)
    {
        mul = dq[0] * dq[1] * dq[2] * dq[3] * dq[4];
    }
    else
    {

        sort_by_absolute(dq);
        mul = dq[0] * dq[1] * dq[2] * dq[3] * dq[4];
        ll max_mul = mul;
        if (mul < 0)
        {
            for (int i = 5; i < n; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    ll tmp_mul = mul / dq[j] * dq[i];
                    max_mul = max(max_mul, tmp_mul);
                }
            }
        }
        mul = max_mul;
        debug(dq);
    }
    cout << mul << '\n';
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