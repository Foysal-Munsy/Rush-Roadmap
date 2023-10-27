/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/25         *
 *    Time: 21:11:58           *
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
    vector<int> a(n);
    int sum = 0;
    bool odd = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] & 1)
            odd = true;
    }
    if ((sum & 1) or odd)
    {
        cout << "No\n";
    }
    else if (sum % n != 0)
    {
        cout << "No\n";
    }
    else
    {
        sum /= n;
        if (sum & 1)
            cout << "No\n";
        else
            cout << "Yes\n";
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