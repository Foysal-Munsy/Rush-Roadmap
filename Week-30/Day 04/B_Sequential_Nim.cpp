//
// Created by Foysal Munsy on 25 / 12 / 2023
// Time: 21 : 55 : 09
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
    vector<ll> a(n);
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            ok = true;
    }
    if (!ok)
    {
        cout << "First\n";
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cnt++;
        else
            break;
    }
    if (cnt == n)
        cout << ((cnt & 1) ? "First\n" : "Second\n");
    else
        cout << (!(cnt & 1) ? "First\n" : "Second\n");
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