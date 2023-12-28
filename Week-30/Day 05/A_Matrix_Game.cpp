// get one percent better every day...
//  Created by Foysal Munsy on 26 / 12 / 2023
//  Time: 07 : 07 : 12
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
    int a[n][m];
    int row[n], col[m];
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                row[i] = col[j] = 1;
            }
        }
    }
    int unclaimed_r = count(&row[0], &row[n], 0), unclaimed_c = count(&col[0], &col[m], 0);
    int cnt = min(unclaimed_r, unclaimed_c);
    cout << (!(cnt & 1) ? "Vivek" : "Ashish") << '\n';
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