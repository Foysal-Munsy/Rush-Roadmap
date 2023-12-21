//
// Created by Foysal Munsy on 21 / 12 / 2023
// Time: 19 : 25 : 46
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
    string s, t;
    ll k;
    cin >> s >> k;
    ll n = stoll(s);
    ll mn = *min_element(all(s)) - '0', mx = *max_element(all(s)) - '0';
    ll ans = n;
    --k;
    for (; k--;)
    {
        ans = n + mn * mx;
        t = to_string(ans);
        n = stoll(t);
        mn = *min_element(all(t)) - '0', mx = *max_element(all(t)) - '0';
        if (mn == 0)
            break;
    }
    cout << ans << '\n';
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