//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 00 : 46 : 14
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    (360 % (180 - a) == 0) ? cout << "YES\n" : cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (; t--;)
        solve();
    return 0;
}