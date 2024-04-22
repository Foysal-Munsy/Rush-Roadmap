//
// Created by Foysal Munsy on 28 / 03 / 2024
// Time: 20 : 54 : 03
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
    string ans = "";
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a & 1)
        {
            ans += "##";
            a = 2;
        }
        else
        {
            ans += "..";
            a = 1;
        }
    }
    if (n == 1)
    {
        cout << "##\n";
        cout << "##\n";
        return;
    }
    if (!(n & 1))
    {
        for (int i = 1; i <= n; i++)
        {
            cout << ans << nl;
            cout << ans << nl;
            reverse(all(ans));
        }
    }
    else
    {
        string ans2 = "";
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == '#')
                ans2 += '.';
            else
                ans2 += '#';
        }
        for (int i = 1; i <= n / 2; i++)
        {
            cout << ans << '\n';
            cout << ans << '\n';

            cout << ans2 << '\n';
            cout << ans2 << '\n';
        }
        cout << ans << '\n';
        cout << ans << '\n';
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