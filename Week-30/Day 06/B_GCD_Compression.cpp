//
// Created by Foysal Munsy on 27 / 12 / 2023
// Time: 07 : 33 : 00
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
    int n;
    cin >> n;
    vector<pair<int, int>> vp(2 * n), odd, evn, ans;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        vp[i].first = x;
        vp[i].second = i + 1;
    }

    for (int i = 0; i < vp.size(); i++)
    {
        if (vp[i].first & 1)
        {
            odd.push_back({vp[i].first, vp[i].second});
        }
        else
        {
            evn.push_back({vp[i].first, vp[i].second});
        }
    }
    debug(vp);

    for (int i = 0; i + 1 < odd.size(); i += 2)
    {
        ans.push_back({odd[i].second, odd[i + 1].second});
    }
    for (int i = 0; i + 1 < evn.size(); i += 2)
    {
        ans.push_back({evn[i].second, evn[i + 1].second});
    }

    for (int i = 0; i < n - 1; i++) // two discard so n-1
        cout << ans[i].first << " " << ans[i].second << '\n';
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