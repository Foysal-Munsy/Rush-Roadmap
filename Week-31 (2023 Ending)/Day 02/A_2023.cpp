//
// Created by Foysal Munsy on 30 / 12 / 2023
// Time: 20 : 55 : 54
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
    int n, k, track = 0;
    cin >> n >> k;
    vector<int> a(n);
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mul *= a[i];
    }
    if (mul == 2023)
    {
        cout << "YES\n";
        for (int i = 0; i < k; i++)
        {
            cout << 1 << " ";
        }
        cout << '\n';
        return;
    }
    bool flag = false;
    for (int i = 1; i <= 2023; i++)
    {
        if (mul * i == 2023)
        {
            track = i;
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        cout << track << " ";
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << '\n';
    }
    else
    {
        cout << "NO\n";
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