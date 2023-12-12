//
// Created by Foysal Munsy on 09 / 12 / 2023
// Time: 09 : 38 : 40
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
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    vector<long long> pref, ans;
    long long t = k, sum = 0;
    for (long long i = 0; i < n; i++)
    {
        sum += a[i];
        pref.push_back(sum);
    }
    ans.push_back(pref[k - 1]);
    for (long long i = k; i < n; i++)
    {
        ans.push_back(pref[i] - pref[i - k]);
    }
    pref.clear();
    auto idx = min_element(all(ans));
    cout << (idx - ans.begin()) + 1 << '\n';
    ans.clear();
    debug(ans);
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
