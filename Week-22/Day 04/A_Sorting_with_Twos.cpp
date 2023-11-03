/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/30         *
 *    Time: 20:47:34           *
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
    int n;
    cin >> n;
    vector<int> a(n + 2);
    int k = n + 2;
    a[k - 2] = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> track;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i + 1])
            continue;
        else
            track.push_back(i);
    }

    bool flag = true;
    int m = track.size();
    if (m == 0 or m == 1)
    {
        cout << "YES\n";
        return;
    }
    // for (int i = 0; i < track.size(); i++)
    // {

    if ((track[m - 1]) % 2 != 0)
        flag = false;
    // }
    cout << (flag ? "YES\n" : "NO\n");
    debug(a, track);
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