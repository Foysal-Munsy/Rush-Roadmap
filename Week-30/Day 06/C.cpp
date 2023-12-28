//
// Created by Foysal Munsy on 27 / 12 / 2023
// Time: 20 : 46 : 26
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
    int n;
    cin >> n;
    vector<int> a(n), b(n, -1e5);
    for (auto &i : a)
        cin >> i;

    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        b[i] = mx;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            cnt++;
    }
    cout << cnt << '\n';
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