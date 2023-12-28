//
// Created by Foysal Munsy on 26 / 12 / 2023
// Time: 12 : 23 : 38
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
    vector<pair<int, int>> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1; // Store the original index
    }

    // Sort the array in descending order based on the elements
    sort(a.begin(), a.end(), greater<pair<int, int>>());

    // Discard the two smallest elements
    a.pop_back();
    a.pop_back();

    // Perform the operation on the remaining elements
    while (a.size() > 1)
    {
        pair<int, int> x = a.back();
        a.pop_back();
        pair<int, int> y = a.back();
        a.pop_back();
        cout << x.second << " " << y.second << endl;
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