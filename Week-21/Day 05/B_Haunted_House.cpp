/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/24         *
 *    Time: 19:48:39           *
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
    string s;
    cin >> s;
    int count = 0;
    reverse(s.begin(), s.end());
    vector<int> track;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            track.push_back(i - track.size());
        }
        else
            count++;
    }
    ll sum = 0;
    for (auto i : track)
    {
        sum += i;
        cout << sum << " ";
    }
    for (; count--;)
    {
        cout << -1 << " ";
    }
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