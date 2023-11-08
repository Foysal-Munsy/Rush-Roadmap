//
// Created by Foysal Munsy on 07 / 11 / 2023
// Time: 18 : 42 : 45
//
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

vector<ll> a;

void generate_lucky(ll num = 0, int cnt4 = 0, int cnt7 = 0)
{
    if (num > 1e10)
    {
        return;
    }
    if (cnt4 == cnt7 and num != 0)
    {
        a.push_back(num);
    }
    generate_lucky(num * 10 + 4, cnt4 + 1, cnt7);
    generate_lucky(num * 10 + 7, cnt4, cnt7 + 1);
}
void solve()
{
    int n;
    cin >> n;
    generate_lucky();
    sort(a.begin(), a.end());
    auto it = lower_bound(a.begin(), a.end(), n);
    ll ans = *it;
    debug(ans);
    cout << ans << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}