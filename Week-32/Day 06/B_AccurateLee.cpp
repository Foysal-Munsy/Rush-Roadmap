//
// Created by Foysal Munsy on 10 / 01 / 2024
// Time: 15 : 59 : 57
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
    int n, idx = 0;
    cin >> n;
    string s;
    cin >> s;
    size_t found = s.find("10");
    bool ok = false;
    (found != string::npos) ? ok = true : ok = false;
    if (!ok)
    {
        cout << s << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            s[i] = '#';
            idx = i;
            break;
        }
    }
    for (int i = n - 1; i >= idx; i--)
    {
        if (s[i] == '0')
        {
            s[i] = '*';
            idx = i;
            break;
        }
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '#')
            ans += s[i];
        else
            break;
    }
    ans += '0';
    for (int i = idx + 1; i < n; i++)
    {
        ans += s[i];
    }

    cout << ans << nl;
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