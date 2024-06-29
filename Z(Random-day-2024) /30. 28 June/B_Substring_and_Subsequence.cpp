//
// Created by Foysal Munsy on 28 / 06 / 2024
// Time: 21 : 46 : 35
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
    string a, b, first, last;
    cin >> a >> b;
    // a fixed

    // same exist korle ans a.size()
    bool found = false;
    size_t pos = a.find(b);
    if (pos != string::npos)
    {
        found = true;
    }
    if (found)
    {
        cout << a.size() << nl;
        return;
    }

    // same exist na korle
    ll cnt = a.size();
    for (int i = 0, j = 0; i < a.size(); i++)
    {
        if (b[j] == a[i])
            break;
        else
        {
            j++;
            cnt++;
        }
    }
    cout << cnt;
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