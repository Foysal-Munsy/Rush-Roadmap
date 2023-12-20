//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 22 : 00 : 12
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define allR(x) x.rbegin(), x.rend()
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
    vector<pair<ll, ll>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i].first = x;
        a[i].second = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b[i].first = x;
        b[i].second = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        c[i].first = x;
        c[i].second = i + 1;
    }

    // mx tot frnd can join!...with 3 distinct days...
    sort(allR(a));
    sort(allR(b));
    sort(allR(c));
    ll mx_frnd = 0, sz = 3; // 3 distinct so 3 er moddei max pabo
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                if (a[i].second != b[j].second and a[i].second != c[k].second and b[j].second != c[k].second)
                {
                    ll x = a[i].first;
                    ll y = b[j].first;
                    ll z = c[k].first;
                    mx_frnd = max(mx_frnd, x + y + z);
                }
            }
        }
    }
    cout << mx_frnd << nl;
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
