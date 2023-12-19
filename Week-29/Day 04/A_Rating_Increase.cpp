//
// Created by Foysal Munsy on 18 / 12 / 2023
// Time: 20 : 37 : 02
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    string str;
    cin >> str;
    string a, b;
    bool flag = false;
    for (int i = 1; i < str.length(); ++i)
    {
        a = str.substr(0, i);
        b = str.substr(i);

        if (b[0] == '0')
            continue;
        int num1 = stoi(a);
        int num2 = stoi(b);
        if (num1 < num2)
        {
            cout << a << " " << b << nl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << -1 << nl;
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