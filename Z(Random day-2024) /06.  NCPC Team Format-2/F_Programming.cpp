//
// Created by Foysal Munsy on 14 / 02 / 2024
// Time: 20 : 53 : 58
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
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    string a = "makes sense", b = "something is fishy", ans = "";
    ans = a;
    for (int i = 0; i < n; i++)
    {
        if (vs[i] == "mumble")
            continue;
        else
        {
            ll num = stoi(vs[i]);
            if (num == (i + 1))
                continue;
            else
            {
                ans = b;
                break;
            }
        }
    }
    cout << ans << '\n';
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