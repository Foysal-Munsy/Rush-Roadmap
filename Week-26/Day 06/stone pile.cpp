//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 23 : 29 : 52
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

int n, sum = 0, ans = INT_MAX;
vector<int> a(20);
void min_diff(int i, int s)
{
    if (i == n)
    {
        ans = min(ans, abs((sum - s) - s));
        return;
    }
    min_diff(i + 1, s);
    min_diff(i + 1, s + a[i]);
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    min_diff(0, 0);
    cout << ans << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}