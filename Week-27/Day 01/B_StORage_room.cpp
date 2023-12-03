//
// Created by Foysal Munsy on 01 / 12 / 2023
// Time: 19 : 36 : 21
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
const ll inf = (ll)((1LL << 30LL) - 1LL);
void solve()
{
    long long n;
    cin >> n;
    long long arr[n + 1][n + 1];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
            cin >> arr[i][j];
    }
    // vector<long long> a = {0, 3, 3, 5, 0};
    vector<long long> a(n + 1, inf);
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (i == j)
                continue;
            a[i] = arr[i][j] & a[i];
        }
    }

    debug(a);

    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if ((a[i] | a[j]) != arr[i][j])
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
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