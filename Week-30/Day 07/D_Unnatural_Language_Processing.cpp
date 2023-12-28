//
// Created by Foysal Munsy on 28 / 12 / 2023
// Time: 21 : 09 : 04
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
    string s;
    cin >> s;
    if (n <= 3)
    {
        cout << s << nl;
    }
    else
    {
        string t = "";
        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == 'b' or s[i] == 'c' or s[i] == 'd')
            {
                t += s[i];
                t += s[i - 1];
                t += s[i - 2];
                t += '.';
                i -= 3;
            }
            else
            {
                t += s[i];
                t += s[i - 1];
                t += '.';
                i -= 2;
            }
        }
        if (t.back() == '.')
            t.pop_back();
        reverse(all(t));
        cout << t << nl;
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