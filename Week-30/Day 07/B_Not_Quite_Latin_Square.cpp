//
// Created by Foysal Munsy on 28 / 12 / 2023
// Time: 20 : 45 : 53
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
    vector<string> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    char arr[] = {'A', 'B', 'C'};
    for (int i = 0; i < 3; i++)
    {
        char c = arr[i];

        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] == c)
                {
                    cnt++;
                }
            }
        }
        if (cnt == 2)
        {
            cout << c << nl;
            break;
        }
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