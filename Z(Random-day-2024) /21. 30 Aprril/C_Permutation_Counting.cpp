//
// Created by Foysal Munsy on 30 / 04 / 2024
// Time: 22 : 51 : 25
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    ll mx = a[n - 1], sum = 0, target = 0, idx = 0;
    for (ll i = 0; i < n; i++)
    {
        if (sum + a[i] <= k)
            sum += a[i];
        else
        {
            target = a[i];
            idx = i;
            break;
        }
    }
    debug(a);
    // cout << target << nl;
    for (ll i = 0; i < idx; i++)
    {
        if (a[i] < target && k != 0)
        {
            ll diff = target - a[i];
            if ((k - diff) >= 0)
            {
                k -= diff;
                a[i] += diff;
            }
            else
            {
                a[i] += k;
                k = 0;
            }
        }
    }

    debug(a);
    mx = *max_element(all(a));
    ll mn = *min_element(all(a));
    if (k == n)
    {
        mx += 1, mn += 1;
        k -= n;
    }
    ll ans = 0;
    if (mx == mn)
    {
        ans = (mx * n) - (n - 1);
    }
    else
    {
        ans = (mn * n) - (k - 1);
    }
    cout << ans << '\n';
    debug(a, k);
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