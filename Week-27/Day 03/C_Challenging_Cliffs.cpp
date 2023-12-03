//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 09 : 06 : 15
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));

    if (n == 2)
    {
        cout << a[0] << " " << a[1] << '\n';
        return;
    }

    int pos = -1, mn = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (mn > abs(a[i] - a[i - 1]))
        {
            pos = i;
            mn = abs(a[i] - a[i - 1]);
        }
    }

    for (int i = pos; i < n; i++)
        cout << a[i] << " ";

    for (int i = 0; i < pos; i++)
        cout << a[i] << " ";

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