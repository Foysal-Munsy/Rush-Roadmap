//
// Created by Foysal Munsy on 26 / 11 / 2023
// Time: 12 : 58 : 10
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
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
    vector<int> arr;
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    if (n == 2)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 1; i <= n * n; i += 2)
        arr.push_back(i);
    for (int i = 2; i <= n * n; i += 2)
        arr.push_back(i);
    for (int i = 0; i < n * n; i++)
    {
        if ((i + 1) % n == 0)
            cout << arr[i] << '\n';
        else
            cout << arr[i] << " ";
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