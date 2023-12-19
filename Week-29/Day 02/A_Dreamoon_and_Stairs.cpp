//
// Created by Foysal Munsy on 16 / 12 / 2023
// Time: 20 : 02 : 02
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int mn_steps = (n + 1) / 2;
    // cout << mn_steps;
    int moves = ((mn_steps + m - 1) / m) * m;
    cout << (moves > n ? -1 : moves) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}