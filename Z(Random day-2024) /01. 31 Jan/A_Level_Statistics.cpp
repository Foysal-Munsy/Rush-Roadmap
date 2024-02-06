//
// Created by Foysal Munsy on 31 / 01 / 2024
// Time: 21 : 35 : 25
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
    vector<int> p(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> c[i];
    }

    bool play = true, clear = true, ok = true, diff = true;
    if (p[0] < c[0])
    {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (p[i] < p[i - 1])
        {
            play = false;
            break;
        }
        if (c[i] < c[i - 1])
        {
            clear = false;
            break;
        }
        if (p[i] < c[i])
        {
            ok = false;
            break;
        }
        if ((p[i] - p[i - 1] < c[i] - c[i - 1]))
        {
            diff = false;
            break;
        }
    }
    debug(ok);
    cout << (play == false || clear == false || ok == false || diff == false ? "NO\n" : "YES\n");
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