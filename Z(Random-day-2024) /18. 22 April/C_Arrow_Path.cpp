//
// Created by Foysal Munsy on 22 / 04 / 2024
// Time: 22 : 14 : 00
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
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    --n;
    if (b[n - 1] != '>')
    {
        cout << "NO\n";
        return;
    }
    string s1 = " ", s2 = " ";
    for (int i = 1; i < n; i += 2)
    {
        // cout << a[i];
        s1 += a[i];
        // cout << i;
    }
    // cout << '\n';
    for (int i = 0; i < n; i += 2)
    {
        if (i != n - 1)
            s2 += b[i];
        // cout << b[i];
    }
    // cout << '\n';
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '<' && s2[i] == '<')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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