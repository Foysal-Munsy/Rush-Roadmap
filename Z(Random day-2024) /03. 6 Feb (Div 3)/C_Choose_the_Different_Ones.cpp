//
// Created by Foysal Munsy on 06 / 02 / 2024
// Time: 21 : 33 : 24
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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    set<ll> st1, st2;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= k)
            st1.insert(a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        if (b[i] <= k)
            st2.insert(b[i]);
    }
    ll A = k / 2;
    if (st1.size() < A || st2.size() < A)
        cout << "NO\n";
    else
    {
        bool ok = true;
        set<ll> s;
        for (auto it : st1)
            s.insert(it);
        for (auto it : st2)
            s.insert(it);
        for (ll i = 1; i <= k; i++)
        {
            if (s.find(i) == s.end())
                ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
        st1.clear();
        st2.clear();
        s.clear();
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