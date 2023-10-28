/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/28         *
 *    Time: 20:41:21           *
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp.size() == 1)
    {
        cout << "Yes\n";
        return;
    }
    if (mp.size() > 2)
    {
        cout << "No\n";
        return;
    }
    vector<ll> track;
    for (auto [i, v] : mp)
    {
        track.push_back(v);
    }
    if (!(n & 1))
    {
        if (track[0] == track[1])
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    else
    {
        ll diff = abs(track[0] - track[1]);
        if (diff == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
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