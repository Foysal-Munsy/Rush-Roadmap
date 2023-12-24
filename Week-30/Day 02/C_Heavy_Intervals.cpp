//
// Created by Foysal Munsy on 23 / 12 / 2023
// Time: 21 : 47 : 15
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

void procedure_in(vector<pair<ll, ll>> &in, vector<pair<ll, ll>> &next_in, ll n)
{
    for (int i = 0; i < n; i++)
    {
        next_in.push_back({in[i].first, 0});
        next_in.push_back({in[i].second, 1});
    }
    sort(all(next_in));
    debug(next_in);
    HERE;
}

void calc(vector<pair<ll, ll>> &next_in, vector<ll> &c, deque<ll> &ww, deque<ll> &ekhon, ll &ans, ll n)
{
    for (auto [f, s] : next_in)
    {
        if (s != 0)
        {
            ww.push_back(f - ekhon.back());
            ekhon.pop_back();
        }
        else
        {
            ekhon.push_back(f);
        }
    }
    debug(ekhon);
    HERE;
    sort(all(ww));
    sort(rall(c));
    for (int i = 0; i < n; i++)
    {
        ans += c[i] * ww[i];
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> in(n), next_in;
    vector<ll> c(n);
    deque<ll> ww, ekhon;
    ll ans = 0;
    // l
    for (int i = 0; i < n; i++)
    {
        cin >> in[i].first;
    }
    // r
    for (int i = 0; i < n; i++)
    {
        cin >> in[i].second;
    }
    // c
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    procedure_in(in, next_in, n);
    calc(next_in, c, ww, ekhon, ans, n);

    cout << ans << '\n';
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