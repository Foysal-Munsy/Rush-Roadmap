/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/27         *
 *    Time: 22:47:48           *
 *   -----------------------   *
 *-----------------------------*/
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

void solve()
{
    int N, M, K;
    cin >> N >> M >> K;
    int x, y;
    cin >> x >> y;
    bool ok = true;
    for (int i = 0; i < K; i++)
    {
        int x1, y1;
        cin >> x1 >> y1;
        if (((x + x1) + (y + y1)) % 2 == 0)
            ok = false;
        if (x == x1 && y == y1)
            ok = false;
    }
    cout << (ok ? "YES\n" : "NO\n");
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