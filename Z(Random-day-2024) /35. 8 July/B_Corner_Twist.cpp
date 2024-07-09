//
// Created by Foysal Munsy on 08 / 07 / 2024
// Time: 12 : 29 : 46
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
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(n);
    for (auto &c : a)
        cin >> c;
    for (auto &c : b)
        cin >> c;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            while (a[i][j] != b[i][j])
            {
                // focus on subrectangle 2X2
                //[i][j],1 --diagonally-> [i+1][j+1],1  MOD 3
                //[i][j+1],2---opp. diagonally--> [i+1][j],2 MOD 3
                /*add 1 MOD 3*/
                a[i][j] = ((a[i][j] - '0' + 1) % 3) + '0';
                a[i + 1][j + 1] = ((a[i + 1][j + 1] - '0' + 1) % 3) + '0';

                /*add 2 MOD 3*/
                a[i][j + 1] = ((a[i][j + 1] - '0' + 2) % 3) + '0';
                a[i + 1][j] = ((a[i + 1][j] - '0' + 2) % 3) + '0';
            }
        }
    }

    cout << (a == b ? "YES\n" : "NO\n");
    a.clear();
    b.clear();
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