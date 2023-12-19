//
// Created by Foysal Munsy on 18 / 12 / 2023
// Time: 09 : 01 : 00
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    while (k--)
    {
        int queries;
        cin >> queries;
        int l = 0, r = n;
        bool flag = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] < queries)
            {
                l = mid + 1;
            }
            else // a[mid]>queries
            {
                r = mid - 1;
            }
            if (a[mid] == queries)
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO\n";
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}