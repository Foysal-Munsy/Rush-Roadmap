//
// Created by Foysal Munsy on 07 / 07 / 2024
// Time: 10 : 53 : 34
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
    vector<ll> a(n), b(n), c(n), ans;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (ll i = 0; i < n; i++)
        c[i] = a[i] - b[i];
    ll mx = *max_element(all(c));
    for (ll i = 0; i < n; i++)
    {
        if (mx == c[i])
            ans.push_back(i + 1);
    }
    cout << ans.size() << '\n';
    for (auto &i : ans)
        cout << i << " ";
    cout << '\n';
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