//
// Created by Foysal Munsy on 21 / 11 / 2023
// Time: 22 : 40 : 40
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

// kadane's algorithm for solving maximum sub array sum
int maxSubArraySum(vector<int> &a)
{
    int maxi = INT_MIN, sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum = sum + a[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
void solve()
{
    int n, one_cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            one_cnt++;
            a[i] = -1;
        }
        else
            a[i] = 1;
    }
    int ans = maxSubArraySum(a);
    cout << ans + one_cnt << '\n';
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