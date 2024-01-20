//
// Created by Foysal Munsy on 13 / 01 / 2024
// Time: 07 : 40 : 41
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
    int d, given;
    cin >> d >> given;
    vector<int> mn, mx;
    for (int i = 0; i < d; i++)
    {
        int a, b;
        cin >> a >> b;
        mn.push_back(a);
        mx.push_back(b);
    }
    int mini = accumulate(all(mn), 0);
    int maxi = accumulate(all(mx), 0);
    // cout << mini << " " << maxi << nl;
    if (mini <= given && given <= maxi)
    {
        cout << "YES\n";
        int distribute = given - mini;
        for (int i = 0; i < d; i++)
        {
            if (distribute > 0)
            {
                int add = min(mx[i] - mn[i], distribute);
                mn[i] += add;
                distribute -= add;
            }
            else
                break;
        }
        for (auto &i : mn)
            cout << i << " ";
        cout << '\n';
    }
    else
    {
        cout << "NO\n";
    }
    debug(mn, mx);
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