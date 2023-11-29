//
// Created by Foysal Munsy on 28 / 11 / 2023
// Time: 22 : 06 : 36
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

long long maxSubArraySum(vector<long long> &a)
{
    long long maxi = a[0], sum = a[0], mn = min(0ll, a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        if (abs(a[i] % 2) == abs(a[i - 1] % 2))
        {
            mn = 0;
            sum = 0;
        }
        sum += a[i];
        maxi = max(maxi, sum - mn);
        mn = min(mn, sum);
    }

    return maxi;
}
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b;
    for (auto &i : a)
        cin >> i;
    cout << maxSubArraySum(a) << nl;
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