//
// Created by Foysal Munsy on 30 / 11 / 2023
// Time: 16 : 51 : 21
//
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

void solve()
{
    vector<int> a;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        sum += x;
        a.push_back(x);
    }
    int mx = *max_element(all(a));
    cout << (sum % 5 != 0 || mx == 0 ? -1 : sum / 5) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}