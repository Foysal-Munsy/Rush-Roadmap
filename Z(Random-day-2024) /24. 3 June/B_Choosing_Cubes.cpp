//
// Created by Foysal Munsy on 03 / 06 / 2024
// Time: 21 : 31 : 07
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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    --f;
    int fav = a[f], fav_cnt = 0, cnt = 0;
    fav_cnt = count(all(a), fav);

    cnt = fav_cnt;
    debug(fav_cnt, cnt);
    sort(rall(a));
    debug(a);
    for (int i = 0; i < k; i++)
    {
        debug(a[i], k);
        if (a[i] == fav)
            fav_cnt--;
    }
    debug(fav_cnt, cnt);
    if (fav_cnt == cnt)
    {
        cout << "NO\n";
    }
    else if (fav_cnt == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "MAYBE\n";
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