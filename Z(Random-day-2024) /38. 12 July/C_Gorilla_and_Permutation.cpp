//
// Created by Foysal Munsy on 12 / 07 / 2024
// Time: 11 : 37 : 21
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
    vector<ll> ans;
    for (ll i = n; i > m; i--)
        ans.push_back(i);
    for (ll i = 0; i < m; i++)
        ans.push_back(i + 1);

    debug(ans);
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