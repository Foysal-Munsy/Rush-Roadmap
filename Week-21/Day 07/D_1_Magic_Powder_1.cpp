/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/26         *
 *    Time: 22:56:42           *
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
    int arr[n];
    if (n == 1)
    {
        cout << 0;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0, mini = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[maxi] < arr[i])
        {
            maxi = i;
        }
        if (arr[mini] >= arr[i])
        {
            mini = i;
        }
    }
    int ans = maxi;
    if (mini < maxi)
    {
        ans = ans + n - mini - 2;
    }
    else
    {
        ans = ans + n - mini - 1;
    }
    cout << ans;
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