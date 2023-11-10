//
// Created by Foysal Munsy on 09 / 11 / 2023
// Time: 12 : 52 : 44
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

double binary_search(double low, double high, double area)
{
    double mid;
    while (high - low > 1e-6)
    {
        mid = (low + high) / 2.0;
        if (mid * mid / 2 < area)
            low = mid;
        else
            high = mid;
    }
    return low;
}
void solve()
{
    int n;
    double h;
    cin >> n >> h;
    double total_area = h * h / 2;
    for (int i = 1; i < n; i++)
    {
        double area = total_area * i / n;
        double cut = binary_search(0, h, area);
        cout << fixed << setprecision(12) << cut << " ";
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