//
// Created by Foysal Munsy on 12 / 11 / 2023
// Time: 22 : 08 : 42
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

int n, m;
int a[101], b[101];
double dp[101][5010], p[101];
bool check(double P)
{
    for (int i = n; i >= 1; --i)
    {
        for (int j = m + 1; j <= 5000; ++j)
            dp[i + 1][j] = P;
        for (int j = 0; j <= m; ++j)
        {
            dp[i][j] = min((dp[i + 1][j + a[i]] + a[i]) * (p[i] / 100.0) + (dp[i + 1][j + b[i]] + b[i]) * ((100.0 - p[i]) / 100.0), P);
        }
    }
    return dp[1][0] < P;
}
void solve()
{

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i] >> p[i];
    }
    double left = 1, right = 1e9, times = 123;
    // fabs for abs value of floation number
    while (fabs(right - left) > 1e-9 && times)
    {
        --times;
        double mid = (left + right) / 2.0;
        if (check(mid))
            right = mid;
        else
            left = mid;
    }
    cout << fixed << setprecision(9) << left << '\n';
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