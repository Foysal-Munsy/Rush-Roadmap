//
// Created by Foysal Munsy on 19 / 02 / 2024
// Time: 20 : 39 : 01
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
    int arr[n][n];
    vector<int> a;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (auto c : s)
        {
            if (c == '1')
                one++;
        }
        if (one != 0)
            a.push_back(one);
        one = 0;
    }
    debug(a);
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << "TRIANGLE\n";
            return;
        }
    }
    cout << "SQUARE\n";
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