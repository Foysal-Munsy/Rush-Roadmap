//
// Created by Foysal Munsy on 16 / 01 / 2024
// Time: 21 : 48 : 21
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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> m(n + 1, 0);
    ll index = 0;
    for (auto &i : m)
    {
        if (index != 0)
            cin >> i;
        index++;
    }
    // adjacent_difference(all(m), diff.begin());
    bool flag = true;
    for (ll i = 1; i <= n; i++)
    {
        ll d = m[i] - m[i - 1];
        ll dif = d * a;
        ll mn = min(dif, b);
        f -= mn;
        if (f <= 0)
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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